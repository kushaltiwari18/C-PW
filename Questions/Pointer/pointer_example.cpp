#include<iostream>

int main(){

    int x = 18;
    float y = 7.9;

    // create a pointer that can store address of x
    // As x is an integer variable, so we nneed a pointer that can store address of integer type.

    int *ptr = &x;
    std::cout<<"Address inside ptr :"<<ptr<<"\n";
    std::cout<<"Value inside ptr :"<<*ptr<<"\n";  // dereference

    x = 23; // the bucket x updated the value from 18-->23

    // but ptr is still pointing to the same bucket
    // now if we derefrence ptr, we will get 23.

    std::cout<<"New value of x :"<<x<<"\n";
    std::cout<<"ptr still pointing same memory which has 23 instead of 18 :"<<*ptr<<"\n";

    // can we update the x using using derefrence: Yes

    *ptr = 50;
    // LHS ek already initialised pointer ke liye wo hota hai derefrence
    
    std::cout<<"New value of x :"<<x<<"\n";
    std::cout<<"New value pointed by ptr :"<<*ptr<<"\n";

    int valueAtX = *ptr;
    std::cout<<valueAtX<<"\n";



    return 0;
}