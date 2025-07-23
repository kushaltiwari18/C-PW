#include<iostream>
using namespace std;

int main(){

 // Number of Digit Count

 int n;
 cout<<"Enter number :"<<endl;
 cin>>n;
//  int count = 0;
// while(n>0){
//     n /= 10;
//     count++;
// }
// cout<<count<<endl;

// Find the sum of digits
// int sum = 0;
// while(n>0){
// int lastDigit = n % 10;
// sum += lastDigit;
// n /= 10;

// }
// cout<<sum<<endl;

// Reverse the digit of number 34762 -> 26743
// int reverse = 0;
// while(n>0){
// int lastDigit = n % 10;
// reverse = reverse*10 + lastDigit;
// n /= 10;
// }
// cout<<reverse<<endl;

// Sum of following series : 1 -2 +3 -4 .... n
// int sum = 0;
// for(int i=0; i<=n; i++){
//     if(i%2 == 0){
//         sum -= i;
//     }else{
//         sum += i;
//     }
// }
// cout<<sum<<endl;

// Find a raise to power b
// int power;
// cout<<"Enter power :"<<endl;
// cin>>power;

// int val = 1;
// while(power > 0){
//     val *= n;
//     power--;
// }
// cout<<val<<endl;

// Print first n factorial
int factorial = 1;
// for(int i=1; i<=n; i++){
//     factorial *= i;
// }
while(n>0){
    factorial *= n;
    n--;
}
cout<<factorial<<endl;
return 0;
}