#include<iostream>
#include<limits.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data = d;
        this->next = nullptr;
    }
};

class Stack{
    Node* head;
    int capacity;
    int currSize;

    public:
    Stack(int c){
        this->capacity =c;
        this->currSize = 0;
        head = nullptr;
    };

    bool isFull(){
        return this->currSize == this->capacity;
    };

    void push(int data){
        if(this->currSize == this->capacity){
            cout<<"Overflow";
            return;
        };
        Node* new_node = new Node(data);
        new_node->next = this->head;
        this->head = new_node;
        this->currSize++;
    };

    int pop(int data){
        if(this->head == nullptr){
            cout<<"Underflow";
            return INT_MIN;
        };
        Node* new_head = this->head->next;
        this->head->next = nullptr;
        Node* toBeRemoved = this->head;
        int result = toBeRemoved->data;
        delete toBeRemoved;
        this->head = new_head;
        return result;
    };

    int getTop(){
        if(this->head == nullptr){
            cout<<"Underflow\n";
            return INT_MIN;
        };
        return this->head->data;
    };

    int size(){
        return this->currSize;
    }
};

int main(){

    Stack st(5);
    st.push(5);
    st.push(4);
    st.push(3);
    cout<<st.getTop()<<"\n";
    cout<<st.size()<<endl;
    cout<<st.isFull()<<endl;
    return 0;
}