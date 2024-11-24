#include<iostream>

int main(){

    int x, y; // declare x, y (garbage value)
    std::cin>>x>>y;

    int *ptrx = &x;
    int *ptry = &y;

    int result; // declare result (garbage value)

    int *ptr_result = &result;

    *ptr_result = *ptrx + *ptry;

    std::cout<<result<<"\n";
    std::cout<<*ptr_result<<"\n";

    return 0;
}

// int x = 9;
// int y = 2;
// int *ptr = &x;

// ! ptr = 5  we can't do this, as ptr only store address nothing else.
// ! *ptr = &y; throw error, this won't work as we cannot store address in an int bucket x.
// ! cout<<&ptr; print the address of the ptr bucket not the address stored in ptr

