// ? Today Checklist:-
/*   Introduction to pointer
     Storing the address of an object in pointer.
     Accessing an object through pointer
     Call-by-reference using pointer.
*/

// ? Storing the addres of an object in a pointer.
/*   if we want to access the address of a memory bucket
     we can use Address-of operator

     int x = 10;
     cout<<&x;

    ? Pointer can store address: Yes

      x      y
    0x10d   0x5c

    int x = 10;
    float y = 7.3;

    int *ptr = &x;  // using this we can store address of integer variable.
    foat *ptr = &y; // using this we can store addres of float variable.

   
*/

// ? Accessing data through pointer
// ! Dereference Operator------> cout<<*ptr;
/*  we can use *ptr to actually access value stored on the address pointer by ptr*/

#include<iostream>
 int main(){
        
        int *ptr;          // only declaration
        int marks = 90; 
        ptr = &marks;      // reassignment or update
        std::cout<<ptr<<"\n";
        std::cout<<*ptr;   // dereference

        return 0;
}

