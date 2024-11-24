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

void insertAtPosition(Node* &head, int val, int pos){

    if(pos==0){
        insertAtHead(head, val);
        return;
    }

    Node* new_node = new Node(val);
    Node* temp = head;
    int curr_pos = 0;
    while(curr_pos != pos-1 ){
        temp = temp->next;
        curr_pos++;
    }

    // temp is pointing to node at pos-1
    new_node->next = temp->next;
    temp->next = new_node;

};

void updateAtPosition(Node* &head, int val, int k){

    Node* temp = head;
    int curr_pos = 0;

    while(curr_pos != k){
        temp = temp->next;
        curr_pos++;
    }

    // temp is pointing to kth node
    temp->val = val;
}

void display(Node* &head){

    Node* temp = head;
    while(temp){
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){

    Node* head = NULL;
    insertAtHead(head, 4);
    insertAtHead(head, 3);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    display(head);
    insertAtPosition(head, 5, 0
    );   // head, val, pos
    display(head);
    insertAtPosition(head, 6, 3);
    display(head);
    updateAtPosition(head, 7, 4);
    display(head);
    return 0;
}