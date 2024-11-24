#include<iostream>
using namespace std;

class Rectangle{
    public:
    int length;
    int breadth;

    // default constructor - no args passed
    Rectangle(){
        length = 0;
        breadth = 0;
    }

    // parameterised constructor - args passed
    Rectangle (int x, int y){
        length = x;
        breadth = y;
    }

    // copy constructor initialise an obj by another existing obj
    Rectangle(Rectangle &r){
        length = r.length;
        breadth = r.breadth;
    }

    // destructor
    ~Rectangle(){
        cout<<"Destructor is called"<<endl;
    }
};

int main(){

    // Rectangle r1;
    // cout<<r1.length<<" "<<r1.breadth<<endl;

    Rectangle *r1 = new Rectangle();
    cout<<r1->length<<" "<<r1->breadth<<endl;
    delete r1;

    Rectangle r2(3, 4);
    cout<<r2.length<<" "<<r2.breadth<<endl;

    Rectangle r3 = r2;
    cout<<r3.length<<" "<<r3.breadth<<endl;

    return 0;
}