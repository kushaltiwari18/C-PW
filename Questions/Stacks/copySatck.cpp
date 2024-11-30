#include<iostream>
#include<stack>
using namespace std;

stack<int> copyStack(stack<int> &input){
    stack<int> temp;
    while(!input.empty()){
        int curr = input.top();
        input.pop();
        temp.push(curr);
    }

    stack<int> result;
    while(!temp.empty()){
        int curr = temp.top();
        temp.pop();
        result.push(curr);
    }
    return result;
}

int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    stack<int> res = copyStack(st);
    while(!res.empty()){
        int curr = res.top();
        res.pop();
        cout<<curr<<"\n";
    }
    return 0;
}