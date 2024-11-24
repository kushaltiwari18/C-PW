#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};

class LinkedList{
    public:
    Node* head;

    LinkedList(){
        head = NULL;
    };

    void insertAtTail(int val){
        Node* new_node = new Node(val);
        if(head == NULL){
            head = new_node;
            return;
        }
        Node* temp = head;
        while(temp->next){
            temp = temp->next;
        }
        temp->next = new_node;
    };

    void display(){
        Node* temp = head;
        while(temp){
            cout<<temp->val<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

Node* reverseKLL(Node* &head, int k){

    Node* prevptr = NULL;
    Node* currptr = head;

    // for counting first k nodes
    int counter = 0;
    while(currptr != NULL && counter < k){
        // reversing first k nodes
        Node* nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        counter++;
    }

    // currptr will give us (k+1)th node
    if(currptr != NULL){
        // recursive call
        Node * new_head = reverseKLL(currptr, k); 
        head->next = new_head;
    }
    // prevptr will give the new_head of connected linked list
    return prevptr;

};

int main(){

    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.insertAtTail(6);
    ll.display();
    ll.head = reverseKLL(ll.head, 2);
    ll.display();
    return 0;
}