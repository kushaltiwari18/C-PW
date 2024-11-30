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

    void insertAtHead(int val){
        Node* new_node = new Node(val);
        if(head==nullptr){
            head=new_node;
            tail=new_node;
            return;
        }
        new_node->next=head;
        head->prev=new_node;
        head=new_node;
    }

    void insertAtEnd(int val){
        Node* new_node = new Node(val);
        if(tail==nullptr){
            head=new_node;
            tail=new_node;
            return;
        };
        tail->next=new_node;
        new_node->prev=tail;
        tail=new_node;
        return;
    };

    void insertAtPosition(int val, int k){
        // assuming k is less or equal to length of doubly linked list
        Node* temp =  head;
        int count = 1;
        while(count < (k-1)){
            temp = temp->next;
            count++;
        }
        // temp will be pointing to the node at (k-1)th position
        Node* new_node = new Node(val);
        new_node->next = temp->next;
        temp->next = new_node;
        new_node->prev=temp;
        new_node->next->prev=new_node;
        return;
    }

    void display(){
        Node* temp = head;
        while(temp != nullptr){
            cout<<temp->val<<"<->";
            temp=temp->next;
        }
        cout<<endl;
    };
};

int main(){

    DoublyLinkedList dll;
    dll.insertAtHead(1);
    dll.display();
    dll.insertAtHead(2);
    dll.display();
    dll.insertAtEnd(3);
    dll.display();

    dll.insertAtPosition(5,3);
    dll.display();

    return 0;
}