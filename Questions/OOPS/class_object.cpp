#include<iostream>
#include<string>
using namespace std;

class Fruits{
    public:
    string name;
    string color;
};

int main(){

    // 1st way, dot operator
    Fruits apple; // object
    apple.name = "Apple";
    apple.color = "Red";
    cout<<apple.name<<"-"<<apple.color<<endl;

    // 2nd way, through new keyword (object pointer)
    Fruits *mango = new Fruits();
    mango->name = "Mango";
    mango->color = "Yellow";
    cout<<mango->name<<"-"<<mango->name<<endl;

    return 0;
}