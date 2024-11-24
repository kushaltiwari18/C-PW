//? Given an array of n integers and a target value x. Print wheather x exists in the array or not.
// Input :- n = 8 , x = 14 , arr = [4, 12, 54, 14, 3, 8, 6]
// Output :- Yes

#include<iostream>

bool f(int *arr, int n, int i, int x){
    // base case
    if(i==n){
        // array is exhausted
        return false;
    }
    return (arr[i]==x || f(arr, n, i+1, x));
}

int main(){

    int arr[] = {5, 4, 1, 8, 6, -9, 8, 2, 3, 5};
    int n = 10;
    int x = 7;
    bool result = f(arr, n, 0, x);
    if(result) std::cout<<"Yes"<<"\n";
    else std::cout<<"NO"<<"\n";
    return 0;
}