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

Node* reverseRecursiveLl(Node* &head){

    // base case
    if(head == NULL || head->next == NULL){
        return head;
    }
    // recursive case
    Node* new_head = reverseRecursiveLl(head->next);
    head->next->next = head;
    head->next = NULL;
    return new_head;
};

int main(){

    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.display();
    ll.head = reverseRecursiveLl(ll.head);
    ll.display();

    return 0;
}