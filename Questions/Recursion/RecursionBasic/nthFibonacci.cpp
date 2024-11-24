// ?Program to find nth fibonaaci number
/*  0, 1, 1, 2, 3, 5, 8, 13, 21.........
    [0, 1] ---> seeding value

    Fibonacci Series:- Value of any nth term is equal to the sum of the
    previous two terms. i.e (n-1)th term + (n-2)th term.

    ! fib(n) = fib(n-1) + fib(n-2)
    fib(n) => The function returns the nth fibonacci.

    #Base Case:- if(n==0) return 0;
                 if(n==1) return 1;

    #Assumption:- Let's assume function fib works correctly for (n-1) &
                  (n-2). fib(n-1), fib(n-2)

    #Self Work:- Sum the value of (n-1)th & (n-2)th.
      
*/

#include<iostream>

int fib(int n){
    // base case
    if(n==0 || n==1) return n;
    return fib(n-1) + fib(n-2);
}

int main(){

    int result = fib(3);
    std::cout<<result<<"\n";

    return 0;
}