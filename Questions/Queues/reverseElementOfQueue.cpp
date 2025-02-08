#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main(){

    queue<int> input; // queue
    input.push(100);
    input.push(200);
    input.push(300);
    input.push(400);

    stack<int> st;   // stack
    while(!input.empty()){
        st.push(input.front());
        input.pop();
    }

    while(!st.empty()){
        input.push(st.top());
        st.pop();
    }

    while(!input.empty()){
        cout<<input.front()<<" ";
        input.pop();
    }

    return 0;
}