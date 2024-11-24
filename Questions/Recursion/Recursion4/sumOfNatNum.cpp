// ? Given a number n, Find the sum of natural numbers till n but with alternate sign
//   That mean if n = 5 then you have to return 1-2+3-4+5 = 3

/*  #Observation :- 
    (i) All the  even number gets a negative sign.
    (ii) All the odd no. gets a positive sign.

    f(n) = f(n-1) + ((n%2==0) ? (-n) : n)

    #Base Case :- n = 0; return 0;
    #Assume :- assume function works correctly for (n-1).

 */

#include<iostream>

int f(int n){
    // base case
    if(n==0) return 0;
    // assumption
    return f(n-1) + ((n%2==0) ? (-n) : n);
}

int main(){
    std::cout<<f(5)<<"\n";
    return 0;
}