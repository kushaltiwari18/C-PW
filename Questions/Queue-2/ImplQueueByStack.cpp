/* We are given a stack data structure with push and pop operation, the task is to implement a queue using
   instanse of stack data structure and operations on them.
*/

#include <iostream>
#include <stack>
using namespace std; 

class Queue {
    stack<int> st;

    public:
    Queue(){}

    void push(int x) {
        this->st.push(x);
    };

    void pop() {
        if(this->st.empty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        stack<int> temp;
        while(this->st.size() > 1) {
            temp.push(this->st.top());
            this->st.pop();
        }
        // now stack is size 1, and we are at the bottom of the stack

        this->st.pop();
        while(!temp.empty()) {
            this->st.push(temp.top());
            temp.pop();
        }
    }

    bool empty() {
        return this->st.empty();
    }

    int front() {
        if(this->st.empty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        stack<int> temp;
        while(this->st.size() > 1) {
            temp.push(this->st.top());
            this->st.pop();
        }
        // now stack is size 1, and we are at the bottom of the stack
        int top = this->st.top();

        while(!temp.empty()) {
            this->st.push(temp.top());
            temp.pop();
        }
        return top;
    }

};

int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.pop();
    while (!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
   
    return 0;
}