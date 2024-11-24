// ? Given a number num and a value k. Print k multiple of n.

/*  #Observation :- we can atleast directly get the kth multiple of num by just multiplying num with 
                    (num x kth)
                    
    f(num, k) = f(num, k-1)   -> print(num*k)

    #Base Case :- (k==0) we do nothing and just return.
    #Assumption :- function f works correctly for (k-1) i.e function  f correctly print the first (k-1)
                   multiples of num.

*/

#include<iostream>

void f(int num, int k){
    // base case
    if(k==0) return ;
    // assumption
    f(num, k-1);
    //self work
    std::cout<<(num*k)<<"\n";
}

int main(){
    f(3, 3);
    return 0;
}