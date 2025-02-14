// pop efficient queue

#include <iostream>
#include <stack>
using namespace std;

class Queue{
    stack<int> st;

    public:
    Queue(){}

    void push(int x) {
        stack<int> temp;
        while(!this->st.empty()) {
            temp.push(this->st.top());
            this->st.pop();
        }
        this->st.push(x);
        while(!temp.empty()) {
            this->st.push(temp.top());
            temp.pop();
        }
    }

    void pop() {
        if(this->st.empty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        this->st.pop();
    }

    int front() {
        if(this->st.empty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return this->st.top();
    }

    bool empty() {
        return this->st.empty();
    }
};

int main() {
    Queue q;
    // q.push(1);
    // q.push(2);
    // q.push(3);
    // q.push(4);
    // q.push(5);
    q.pop();

    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    return 0;
}