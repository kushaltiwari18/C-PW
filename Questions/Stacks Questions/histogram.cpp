#include<iostream>
#include<vector>
#include<stack>
#include<limits.h>
using namespace std;

int histogram(vector<int> &arr){
    int n = arr.size();
    stack<int> st; // index
    int ans = INT_MIN;
    st.push(0);
    for(int i=1; i<n; i++){
        while(!st.empty() && arr[i] < arr[st.top()]){
            int element = arr[st.top()];
            st.pop();
            int nsi = i; // next smaller index
            int psi = (st.empty()) ? -1 : st.top();
            ans = max(ans, element*(nsi-psi-1));
        }
        st.push(i);
    }

    while(!st.empty()){
        int element = arr[st.top()];
        st.pop();
        int nsi = n;
        int psi = (st.empty()) ? -1 : st.top();
        ans = max(ans, element*(nsi-psi-1));
    }

    return ans;

}

int main()
{
    int n;
    cout<<"Enter size:  ";
    cin>>n;
    vector<int> v;
    while(n--){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int ans = histogram(v);
    cout<<ans<<endl;
    return 0;
}

// 2 1 5 6 2 3 0 2 1 5 6 2 3