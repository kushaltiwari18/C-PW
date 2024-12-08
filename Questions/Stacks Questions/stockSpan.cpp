#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> pge(vector<int> &arr){
    int n = arr.size();
    reverse(arr.begin(), arr.end());
    vector<int> output(n,-1);
    stack<int> st;
    st.push(0);
    for(int i=1; i<n; i++){
        while(!st.empty() && arr[i] > arr[st.top()]){
            output[st.top()] = n-i-1; // after reverse index will change
            st.pop();
        }
        st.push(i);
    }
    reverse(output.begin(),output.end());
    reverse(arr.begin(), arr.end());
    return output;
}

int main()
{
    int n;
    cout<<"Enter Size :  ";
    cin>>n;
    vector<int> v;
    while(n--){
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int> res = pge(v);
    for(int i=0; i<res.size(); i++){
        cout<<(i -res[i])<<" "; // The final output, (i - res[i]), computes the distance to the Previous Greater Element correctly.
    }
    return 0;
}

// 100 80 60 70 60 75 85
// 100 80 60 70 60 75 85
// -1 0 1 1 3 1 0