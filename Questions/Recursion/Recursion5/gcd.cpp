// ? Given two number x and y. Find the greatest common divisor of x and y using recursion.
/*  Constraints:- 0 <= x, y = 1e6
     gcd/hcf
     Input: x = 4; y = 9  Output: 1
     4 = 2x2x1
     9 = 3x3x1
     Input: x = 12, y = 20 Output: 4
     12 = 2x2x3x1
     20 = 2x2x5x1
///////////////////////////////////////////
!   Eculid's Algorithm
    if we subtract a smaller number from a larger, we can reduce the larger number but the 
    gcd/hcf will not change.

    gcd/hcf => 54, 72
    54, 72-54

    54 = 2x3xx3x3x1
    72 = 2x2x2x3x3x
    gcd = 18

    54 = 2x2x3x3x1
    18 = 2x3x3x1
    gcd = 18

!   By division
    gcd(a,b)  a>b
    gcd(a,b)  gcd(b, a%b)

    72, 54
    54, 72%54
    gcd(a,b) is G assume

    a = bq + r
    a - bq = r // bq is multiple of b
    23 = 7x3+2
    a = bxq+r
    
    we can say that G completely divide a and b.
    (a-bq) is completely divisible by G

    72 = 54x1 + 18
    72 - 54x1 = 18

!   Recurrence Relation :- gcd(a,b) = gcd(b, a%b)

    #Base Case :- a>b if(b==0) ans a.

*/

#include<iostream>

int gcd(int a, int b){
    if(b>a) return gcd(b, a);
    // base case
    if(b==0) return a;
    return gcd(b, a%b);
}

int main(){
    int x = gcd(54, 0);
    std::cout<<x<<"\n";
    return 0;
}