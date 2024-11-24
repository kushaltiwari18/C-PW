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

void insertAtHead(Node* &head, int val){
    Node* new_node = new Node(val);
    new_node->next = head;
    head = new_node;
};

void deleteAtHead(Node* &head){
    Node* temp = head;
    head->next = head;
    free(temp);
}

void display(Node* &head){
    Node* temp = head;
    while(temp){
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
};

void deleteAtPosition(Node* &head, int pos){

    if(pos==0){
        deleteAtHead(head);
        return;
    }

    int curr_pos = 0;
    Node* prev = head;
    while(curr_pos != pos-1){
        prev = prev->next;
        curr_pos++;
    }

    // now prev is pointing to position pos-1
    Node * temp = prev->next;
    prev->next = prev->next->next;
    free(temp);

};

int main(){

    Node* head = NULL;
    insertAtHead(head, 4);
    insertAtHead(head, 3);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    display(head);
    deleteAtPosition(head, 2);
    display(head);
    deleteAtPosition(head, 2);
    display(head);

    return 0 ;
}