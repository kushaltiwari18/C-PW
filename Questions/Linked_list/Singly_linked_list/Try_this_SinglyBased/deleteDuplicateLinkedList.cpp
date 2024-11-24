#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node( int data){
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

    void insertAtTail( int val){
        Node* new_node = new Node(val);
        if(head == NULL){
            head = new_node ;  // ulta nai
            return;
        };
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = new_node; // ulta nai
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

void deleteDuplicateNodes(Node* &head){

    Node* curr_node = head;
    while(curr_node){
        while(curr_node->next && curr_node->val == curr_node->next->val){
            // delete curr_node->next
            Node * temp = curr_node->next; // node to delete
            curr_node->next = curr_node->next->next;
            free(temp);
            // this loop will ends when current node and next node values are different or linked list ends
        };
        curr_node = curr_node->next;

    };
};

int main(){

    LinkedList ll;
    ll.insertAtTail(3);
    ll.insertAtTail(3);
    ll.insertAtTail(2);
    ll.insertAtTail(2);
    ll.insertAtTail(1);
    ll.display();
    deleteDuplicateNodes(ll.head);
    ll.display();
}