#include<iostream>

int f(int p, int q){
    // base case
    if(q==0) return 1;
    if(q%2==0){
        // if q is evev
        int result = f(p, q/2);
        return result*result;
    }else{
        // if q is odd  
        int result = f(p, (q-1)/2);
        return p*result*result;
    }
}

int main(){

int result = f(3, 4);
std::cout<<result<<"\n";

return 0;

}