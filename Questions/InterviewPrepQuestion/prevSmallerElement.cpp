#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main()
{
    vector<int> arr = {6,8,0,1,3};
    stack<int> st;
    vector<int> ans(arr.size(),0);

    for(int i =0; i<arr.size(); i++){
        while(!st.empty() && st.top() > arr[i]){
            st.pop();
        }

        st.empty() ? ans[i] = -1 : ans[i] = st.top();

        st.push(arr[i]);
    }

    for(int val : arr){
        cout<<val<<" ";
    }
    cout<<endl;
    for(int val : ans){
        cout<<val<<" ";
    }
    return 0;
}