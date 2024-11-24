// ? Given a number n, Print if it is an armstrong number or not.

// An armstrong number is a number if the sum of every digit in that number raised to power of total
// digits in that number is equal to the number
// 153 => 1^3 +5^3+ 3^3 ==> 153 ~ Yes
// f(n, d) = pow(n%d) + f(n/10, d)
// f(n, d) --> Sum of digits of n, raise to power d
// f(n/10, d) --> assumption
// pow(n%d) + f(n/10, d) --> self work
// d --> number of digits in the original number


#include<iostream>

int pow_recursive(int p, int q){
    // base case
    if(q==0) return 1;
    if(q%2==0){
        // if q is even
        int result = pow_recursive(p, q/2);
        return result*result;
    }else{
        // if q is odd
        int result = pow_recursive(p, (q-1)/2);
        return p*result*result;
    }
}

int f(int n, int d){
    // base case
    if(n==0) return 0;
    return pow_recursive(n%10, d) + f(n/10, d);
}

int main(){

int n;
std::cin>>n;
int no_of_digit = 0;
int temp = n;

while(temp>0){
    temp = temp/10;
    no_of_digit++;
}

int result = f(n, no_of_digit);
if(result==n){
    std::cout<<"Yes"<<"\n";
}else{
    std::cout<<"No"<<"\n";
}

return 0;
}
