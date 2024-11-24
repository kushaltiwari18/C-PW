#include<iostream>
#include<limits>
using namespace std;

class Stack{
    int capacity;
    int* arr;
    int top;
    public:
    Stack(int c){
        this->capacity = c;
        arr = new int[c];
        this->top = -1;
    }

    void push(int data){
        if(this->top == this->capacity-1){
            cout<<"Overflow"<<endl;
            return;
        }
        this->top++;
        this->arr[this->top] = data;
    }

    int pop(){
        if(this->top == -1){
            cout<<"Underflow"<<endl;
            return -1;
        }
         return this->top--;
    }

    int getTop(){
        if(this->top == -1){
            cout<<"Underflow"<<endl;
            return INT_MIN;
        }
        return this->arr[this->top];
    }

    bool isEmpty(){
        return this->top == -1;
    }

    int size(){
        return this->top+1;
    }

    bool isFull(){
        return this->top == this->capacity-1;
    }

};

int main(){

    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.pop();
    s.push(40);
    s.push(50);
    s.push(60);
    cout<<s.getTop()<<endl;
    cout<<s.isEmpty()<<endl;
    cout<<s.size()<<endl;
    cout<<s.isFull()<<endl;

    return 0;
}