#include<iostream>
#include<vector>
using namespace std;

class Queue{
    int front;
    int back;
    vector<int> v;

    public:
    Queue(){
        this->back = -1;
        this->front = -1;
    }

    void enqueqe(int data){
        this->v.push_back(data);
        this->back++;
        if(this->back==0) this->front = 0;
    }

    void dequeqe(){
        if(this->front == this->back){
            this->front = -1;
            this->back = -1;
            this->v.clear();
        }else this->front++;
    }

    int getFront(){
        if(this->front == -1) return -1;
        return this->v[this->front];
    }

    bool isEmpty(){
        return this->front == -1;
    }
};

int main(){

    Queue qu;
    qu.enqueqe(10);
    qu.enqueqe(20);
    qu.enqueqe(30);
    qu.dequeqe();
    qu.enqueqe(50);

    while(!qu.isEmpty()){
        cout<<qu.getFront()<<" ";
        qu.dequeqe();
    }

    return 0;
}