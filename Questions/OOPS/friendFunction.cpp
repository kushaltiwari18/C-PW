#include<iostream>
using namespace std;

class A{
    int x;
public:

    A(int y){
        x=y;
    }

    friend void print(A &obj); // fuction definition we provide
};

 void print(A &obj){        // ? independent function / function of another class
        cout<<obj.x<<endl;
 }

int main(){

    A obj(5);
    // cout<<obj.x<<endl; throw error because x is private member
    print(obj);

    return 0;
}

