// ? Print the max value of the array. arr[3, 10, 3, 2, 5]
// To find out the maximum element from the array, we have to atleast read the whole array.

// f(arr, idx, n) = max(arr[idx], f(arr, idx+1, n))
// # Base Case :- If array has only one element, that is the maximum. (idx==n-1) --> return arr[idx]

#include<iostream>
using namespace std;

int f(int *arr, int idx, int n){
    // base case
    if(idx == n-1){
    // we have only one element left, so it is max.
    return arr[idx];
    }

    return max(arr[idx], f(arr, (idx+1), n));
}

int main(){

    int arr[] = {3, 10, 3, 2, 5};
    int n = 5;
    int result = f(arr, 0, n);
    cout<<result<<"\n";

    return 0;
}