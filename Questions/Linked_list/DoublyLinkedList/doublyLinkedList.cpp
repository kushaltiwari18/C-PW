#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* prev;
    Node* next;

    Node(int data){
        val=data;
        prev=nullptr;
        next=nullptr;
    }
};

class DoublyLinkedList{
    public:
    Node* head;
    Node* tail;

    DoublyLinkedList(){
        head=nullptr;
        tail=nullptr;
    }
};

int main(){
    Node* new_node = new Node(3);
    DoublyLinkedList dll;
    dll.head = new_node;
    dll.tail = new_node;
    cout<<dll.head->val<<endl;

    return 0;
}