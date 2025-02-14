#include<iostream>
#include<vector>
using namespace std;

class Queue{
    int front;
    int back;
    vector<int> v;
    int currSize;
    int totalSize;

    public:
    Queue(int n){
        v.resize(n);
        this->totalSize = n;
        this->front = 0;
        this->back = n-1;
        this->currSize = 0;
    }

    void enqueue(int data){
        if(isFull()){
            cout << "Queue is full" << endl;
            return;
        }
        this->back = (this->back + 1) % this->totalSize;
        this->v[this->back] = data;
        this->currSize++;
    }

    void dequeue(){
        if(isEmpty()){
            cout << "Queue is empty" << endl;
            return;
        }
        this->front = (this->front + 1) % this->totalSize;
        this->currSize--;
    }

    int getFront() { // Renamed method to getFront()
        if (this->currSize == 0) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return this->v[this->front];
    }

    bool isEmpty(){
        return this->currSize == 0;
    }

    bool isFull(){
        return this->currSize == this->totalSize;
    }
};

int main(){
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.dequeue();
    q.dequeue();

    while(!q.isEmpty()){
        cout << q.getFront() << " ";
        q.dequeue();
    }
    return 0;
}