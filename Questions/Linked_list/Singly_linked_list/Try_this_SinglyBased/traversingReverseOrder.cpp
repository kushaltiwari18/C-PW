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

class Linkedlist{
    public:
    Node* head;

    Linkedlist(){
        head = NULL;
    }

    void insertAtTail(int val){
        Node* new_node = new Node(val);
        if(head == NULL){
            // new_node->next = head; 
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
    };
};

void reversePrint(Node* head){

    // base case
    if(head == NULL){
        return;
    }

    // recursive case
    reversePrint(head->next);
    cout<<head->val<<" ";
}

int main(){

    Linkedlist ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.display();
    reversePrint(ll.head);
    

    return 0;
}