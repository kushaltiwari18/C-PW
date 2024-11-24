// ? Find the sum of the value of the array [2, 3, 5, 20, 1]
// f(arr, idx, n) = arr[idx] + f(arr, idx+1, n)
// # Base Case :- if there is only 1 element in the array then sum of element is equal to the given element.
// # Assumption :- Assume finction f works for f(arr, idx+1, n)
// # Self Work :- Add arr[idx] to the sum of remeaining elements.

#include<iostream>

int f(int *arr, int idx, int n){
    // base case
    if(idx == n-1){
        return  arr[idx];
    }

    return arr[idx] + f(arr, idx+1, n);
}

int main(){

    int arr[] = {2, 3, 5, 20, 1};
    int n = 5;
    std::cout<<f(arr, 0, n);
}