// ? Pointer Airthmetic

/*(i) Increment (ii) Decrement
  # Increment--> Increment/Decrement of a pointer value refers to shift in memory location that memory location that pointer is pointing to. Shift is dependent on size of the type of variable.
  0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10=A, 11=B, 12=C, 13=D, 14=E, 15=F.

  *ptr++   --> dereference and incremenet address.
  (*ptr)++ --> derefrence and increment value variable.
  *++ptr   --> first move pointer 4 byte then derefrence
  ++*ptr   --> first dereference the increment, derefrence value.
  
*/

#include<iostream>

int main(){

    // eg:1
    int x =20;
    int *ptr = &x;
    std::cout<<ptr<<" "<<(ptr+1)<<" "<<(ptr+2)<<"\n";
    std::cout<<"size of x is :"<<sizeof(x)<<"\n";

    // eg:2
    double dec = 9.0;
    double *ptrd = &dec;
    std::cout<<sizeof(dec)<<"\n";
    std::cout<<ptrd<<" "<<(ptrd+1)<<" "<<(ptrd+2)<<"\n";
    // 0x61fee8 0x61fef0 0x61fef8

    // eg:3
    int y = 10;
    int *ptry = &y;
    std::cout<<ptry<<"\n";   // 0x61fee4
    ptry = ptry + 1;
    std::cout<<ptry<<"\n";   // 0x61fee8
    ptry += 1;
    std::cout<<ptry<<"\n";   // 0x61feec
    ptry++;
    std::cout<<ptry++<<"\n"; // 0x61fef0
    std::cout<<ptry<<"\n";   // 0x61fef4

    std::cout<<ptry<<" "<<*ptry<<"\n";
    std::cout<<*ptry++<<"\n";
    std::cout<<ptry<<" "<<*ptry<<"\n";

    std::cout<<"Array"<<"\n";
    int arr[2] = {1, 2};
    int *ptrArr = &arr[0];
    std::cout<<ptrArr<<" "<<*ptrArr<<"\n";
    std::cout<<(ptrArr+1)<<" "<<*(ptrArr+1)<<"\n";

    return 0;
}