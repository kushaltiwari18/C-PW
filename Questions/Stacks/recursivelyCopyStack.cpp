#include<iostream>
#include<stack>
using namespace std;

void f(stack<int> &st, stack<int> &res){
    if(st.empty()) return;
    int curr = st.top();
    st.pop();
    f(st,res);
    res.push(curr);
}

int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    stack<int> res;
    f(st,res);

    while(!res.empty()){
        int curr = res.top();
        res.pop();
        cout<<curr<<"\n";
    }
    return 0;
}