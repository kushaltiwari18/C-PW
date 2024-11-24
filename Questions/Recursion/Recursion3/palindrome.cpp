// ? Write a program to check wheather a given number is palindrome or not
// num  = 1 2 6 2 1
// temp = 1 2 6 2 1

#include<iostream>

bool f(int num, int *temp){
    // base case
    if(num>=0 && num<=9){
        int lastDigitOfTemp = (*temp) % 10;
        (*temp) /=10;
        return (num == lastDigitOfTemp);
    }
    bool result = (f(num/10, temp) && (num % 10) == ((*temp)%10));
    *temp /= 10;
    return result;
}

int main(){
    int num = 12621;
    int anotherNum = num;
    int *temp = &anotherNum;
    std::cout<<f(num, temp)<<"\n";

    return 0;
}