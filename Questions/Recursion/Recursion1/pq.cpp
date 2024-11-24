// ? Given two number p^q using recursion function

/*   
    # Base Case :- for(q==0) answere will be allways 1.
       f(p, 0) => return 1.
       
    # Assumption :- let's assume function f work correctly for f(p, q-1)
       p^q = p*p*p*p*p*p.....p*p (q times)
       p^q = p * p^q-1


    # Self Work : - Multiply p with f(p, q-1)

*/

#include<iostream>

int f(int p, int q){
    // base case 
    if(q==0) return 1;
    return p * f(p, q-1);
}

int main(){

int result = f(17, 3);
std::cout<<result<<"\n";

return 0;
}