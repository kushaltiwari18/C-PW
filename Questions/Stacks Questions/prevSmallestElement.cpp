#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> pge(vector<int> &arr){  // 10 4 2 20
    int n = arr.size();

    vector<int> output(n, -1); // 
    reverse(arr.begin(), arr.end());
    stack<int> st; // index 
    st.push(0);
    for(int i=1; i<n; i++){
        while(!st.empty() && arr[i] < arr[st.top()]  ){ // 
            output[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);

    }
    // if(!st.empty()){
    //     output[st.top()] = -1;
    //     st.pop();
    // }
    reverse(output.begin(), output.end());
    reverse(arr.begin(), arr.end());  // reverse to original array

    return output;
};

int main()
{
    int n;
    cout<<"Enter size : ";
    cin>>n;
    vector<int> v;
    while(n--){
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int> res = pge(v);
    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }
    return 0;
}

// 4 6 3 1 0 9 5 6 7
// arr->reverse->nge/nse->reverse_output