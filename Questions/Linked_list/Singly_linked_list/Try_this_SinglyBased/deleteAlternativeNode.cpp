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

class linkedList{
    public:
    Node* head;

    linkedList(){
        head = NULL;
    }

    void insertAtTail(int val){
        Node* new_node = new Node(val);
        if(head == NULL){
            head = new_node;
            return;
        };
        Node* temp = head;
        while(temp->next != NULL){
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

void deleteAltNodes(Node* &head){

    Node* curr_node = head;
    while(curr_node != NULL && curr_node->next != NULL){
        Node* temp = curr_node->next;  // node to delete
        curr_node->next = curr_node->next->next;
        free(temp);
        curr_node = curr_node->next;
    }
}

int main(){

    linkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.insertAtTail(6);
    ll.display();
    deleteAltNodes(ll.head);
    ll.display();

    return 0;
}