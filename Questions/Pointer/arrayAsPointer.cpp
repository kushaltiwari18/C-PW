// ? Array as pointer
/*   Special Property:-
     Array ka jo naam hota hai, agr aap cout<<arr"\n" karoge toh 
     0th index pe jo value hai, array ka jo naam hota h, wo usi ka
     address hota hai.
     ! Array ka naam as pointer ki tarah act karta hai(base address milega)
*/

#include<iostream>

int main(){
int arr[3] = {12, 5, 9};
int *ptr = &arr[0];

std::cout<<ptr<<" "<<arr<<" "<<*ptr<<" "<<*arr<<"\n";
// 0x61fef0 0x61fef0 12 12

for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
    std::cout<<*(arr+i)<<"\n";
}
// 12 5 9

return 0;
}