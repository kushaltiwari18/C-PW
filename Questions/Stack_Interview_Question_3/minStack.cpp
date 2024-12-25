#include<iostream>
#include<stack>
#include<limits.h>
using namespace std;


class MinStack{
    public:
    stack<int> st;
    int min;
    MinStack(){
        this->min = INT_MAX;
    }

    void push(int val){
        if(this->st.empty()){  // check if stack is empty 
            this->min = val;   // if stack is empty then set min to val
            this->st.push(val); // push val in the stack
        }else{
            this->st.push(val - this->min);  // if not stack is not empty then (x-min) we push
            if(this->min > val){  // check  if min > val, then we need to replace val
                this->min = val;   // replace val with new val
            }
        }
    }

    void pop(){
        if(not this->st.empty()){  // if not stack is empty
            if(this->st.top() >= 0){  // for +ve scenario
                this->st.pop();
            }else{
                this->min = this->min - this->st.top(); // updating the old min () 
                this->st.pop();
            }
        }
    }

    int getMin(){
        return this->min;
    }

    int top(){
        if(this->st.size() == 1){ // if one element in stack
            return this->st.top(); // return top
        }else if(this->st.top() < 0){  // top is less than 0 means -ve then there is an update in min = top 
            return this->min;
        }else{
            return this->min  + this->st.top(); // if greater than 0 means +ve min+top will give val
        }
    }
};

int main(){

    MinStack mst;

    mst.push(10);
    cout<<mst.top()<<" ";
    cout<<mst.min<<endl;

    mst.push(5);
    mst.push(2);
    cout<<mst.top()<<" ";
    cout<<mst.min<<endl;

    mst.pop();
    cout<<mst.top()<<" ";
    cout<<mst.min<<endl;

    mst.pop();
    mst.push(15);
    cout<<mst.top()<<" ";
    cout<<mst.getMin()<<endl;

    return 0;
}