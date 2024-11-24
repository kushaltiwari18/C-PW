#include<iostream>
using namespace std;

class Parent{
public:

    virtual void print(){              // ab run time pe decide hoga which function will be called
        cout<<"Parent Class"<<endl;
    }

    void show(){
        cout<<"Parent Class"<<endl;
    }
};

class Child: public Parent{
public:

    void print(){
        cout<<"Child Class"<<endl;
    }

    void show(){
        cout<<"Child Class"<<endl;
    }
};

int main(){

    Parent *p;
    Child c;
    p= &c;       // run time pe overide kr diya apne object variable ko.
    p->print();
    p->show();

    return 0;
}