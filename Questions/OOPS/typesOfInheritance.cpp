#include<iostream>
using namespace std;

class Parent{
    public:
    Parent(){
        cout<<"Parent Class"<<endl;
    }
};

class Child: public Parent{
    public:
    Child(){
        cout<<"Child Class"<<endl;
    }
};

class GrandChild: public Child{
    public:
    GrandChild(){
        cout<<"Grand Child Class"<<endl;
    }
};
// multiple
class Parent1{
    public:
    Parent1(){
        cout<<"Parent 1 Class"<<endl;
    }
};

class Parent2{
    public:
    Parent2(){
        cout<<"Parent 2 Class"<<endl;
    }
};

class ChildM: public Parent1, public Parent2{
    public:
    ChildM(){
        cout<<"ChildM Class"<<endl;
    }
};
// * hierarchical
class ChildM1: public Parent1{
    public:
    ChildM1(){
        cout<<"ChildM1 Class"<<endl;
    }
};

class ChildM2: public Parent1{
    public:
    ChildM2(){
        cout<<"ChildM2 Class"<<endl;
    }
};

// * hybrid >1 inheriance/combination style, 

// *Diamond Problem

class ParentD{
    public:
    ParentD(){
        cout<<"ParentD Class"<<endl;
    }
};

class ChildD: public ParentD{
    public:
    ChildD(){
        cout<<"ChildD Class"<<endl;
    }
};

class ChildDE: public ParentD{
    public:
    ChildDE(){
        cout<<"ChildDE Class"<<endl;
    }
};

class GrandChildD: public ChildD, public ChildDE{
    public:
    GrandChildD(){
        cout<<"Grand Child D Class"<<endl;
    }
};

int main(){

    // Child c;
    // GrandChild gc;
    // ChildM m;
    GrandChildD gcd;

    return 0;
}