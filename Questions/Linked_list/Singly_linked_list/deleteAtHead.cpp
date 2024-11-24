#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;


    // constructor
    Node(int data){
        val = data;
        next = NULL;
    }
};

void insertAtHead(Node* &head, int val){
    Node * new_node = new Node(val);
    new_node->next = head;
    head = new_node;

};

void display(Node* &head){
    Node* temp = head;
    while(temp){
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
};

void deleteAtHead(Node* &head){
    Node* temp = head;
    head = head->next;
    free(temp);
};

int main(){

    Node* head = NULL;
    insertAtHead(head, 2);
    display(head);
    insertAtHead(head, 1);
    display(head);
    deleteAtHead(head);
    display(head);
    return 0 ;
}