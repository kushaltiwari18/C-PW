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
    Node* new_node = new Node(val);
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

void  deleteAtTail(Node* &head){
    Node* second_last = head;
    while(second_last->next->next != NULL){
        second_last = second_last->next;
    }

    // now second last is pointing to second last node
    Node* temp = second_last->next;
    second_last->next = NULL;
    free(temp);
}

int main(){

    Node* head = NULL;
    insertAtHead(head, 4);
    insertAtHead(head, 3);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    display(head);
    deleteAtTail(head);
    display(head);


    return 0;
}