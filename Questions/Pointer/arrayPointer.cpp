#include<iostream>

int main(){

    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = (arr +2);

    std::cout<<*ptr<<"\n"; // 3
    *ptr++;
    std::cout<<*ptr<<"\n"; // 4
    *ptr--;
    std::cout<<*ptr<<"\n"; // 3

    int a[3] = {11, 12, 13};
    int (*p)[3] = &a;

    std::cout<<p<<" "<<a<<" "<<*p<<" "<<*a<<"\n";


    return 0;
}