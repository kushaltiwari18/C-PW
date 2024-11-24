// ? Recursion ---> Story
/* A child couldn't sleep, so her mother told a story about a little
   frog. Who couldn't sleep, so the little frog's mother told a story
   about a little bear, who couldn't sleep, so the little bear's mother
   told a story about a little weasel.
   ---> who fell asleep.
   ---> and the little bear fell asleep.
   ---> and the little frog fell asleep.
   ---> and the child fell asleep.
*/

// ? Definitation
/* In recursion, we try to solve a bigger problem by finding out solution
   to smaller sub-problems. We represent these function/problem in the form
   of function and these function call itself to solve smaller sub-problem
*/ 

/* Example:- 
   factorial---> 
   5! => 5*4*3*2*1
   3! => 3*2*1

Q: function to calculation n!
   for(int i=1; i<=n; i++){
    ans = ans * i;
   }

   Observation:-
   4! => 4*3*2*1
   5! => 5*4*3*2*1     5! = 5*4!
   6! => 6*5*4*3*2*1   6! = 6*5!

 */

// ! [f(n) = n x f(n-1)]     n! = n x (n-1)!
// PMI => Principal of Mathematical Induction.
// ? Prove sum of first N natural number is n(n+1)/2

/* #Base Case  --> for n==1, ans will be 1.
   #Assumption --> let's say formula works for n=k.
   #Self Work  --> (1+2+3+4....k + (k+1))
           k(k+1)/2 + (k+1)
           (k+1)(k+2)/2
*/

#include<iostream>

int factorial(int n){
    // base case 
    if(n==1) return 1;
    int ans = n * factorial(n-1);
    return ans;
}

int main(){

    int result = factorial(5);
    std::cout<<result<<"\n";
    return 0;
}

// space --> O(n)
// Time ---> n x c ---> O(n)
// Number of time of function call * Time consumed in one function call.

// ? Working of recursive function

/* 
   Syntax: -
   
   methodName( N parameter)
   {
    if( hault condition ){
        return result
    }
    return methodName( N parameter)
   }

*/
