// ? Given an integer, find out the sum of its digits using recursion.
// eg:- n = 12345 ans = 10.


/* 
   # Base Case :- if(n>=0 and n<=9) return n;
     If you have a single digit number.

 
   # Assumption :- Recursively go and claculate sum of (d-1) digits and last
                   digit to it.
                   How to extract last digit. (n%10) 1234 % 10 = 4
     1234 -->
                   How to reduce to 123. (n/10) 1234 / 10 = 123
                   So to eliminate the last digit divide the number by 10.

   # Self Work :-  To the sum of digits of n/10, add the last digit of n i.e
                   n % 10.
    
*/

#include<iostream>

int f(int n){
// base case
if(n>=0 and n<=9) return n;
return f(n/10) + (n%10);
}

int main(){

    int result = f(653);
    std::cout<<result<<"\n";

    return 0;
}