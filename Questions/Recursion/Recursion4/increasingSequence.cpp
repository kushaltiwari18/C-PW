// ? Given a number n. Find the increasing sequence from 1 to n without using any loop
// Constraint : 0 < n < 1e6=10^6

// #Base Work :- if(n-1) return;
// #Assumption :- Assume that function f works correctly for (n-1).
//  f(n) = f(n-1) --> print(n)

#include<iostream>

void f(int n){
    // base case
    if(n<1) return;
    // assumption :- go and print first n-1 natural number
    f(n-1);
    std::cout<<n<<"\n";
}

int main(){
    f(5);
    return 0;
    
}