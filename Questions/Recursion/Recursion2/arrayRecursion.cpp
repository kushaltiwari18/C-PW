// ? Given an array, print all the elements of the array recursively.
/*   Array = [10, 1, 0, 3, 2, 6, 8]
    # Most of the time to sove a problem related to arrays and strings, 
      we definitely need to read them.
      
      f(arr, idx, ....) 
      arr => given array
      idx => current index we are pointing to, in the array.
      
      f(arr, idx, n) = print(arr[idx]) --> f(arr, idx+1, n)
      function f recursively prints the elements of array starting from index idx.

    # Base Case :- if array is empty print nothing.

    # Assumption :- f(arr, idx+1, n)

    # Self Work :- print all the element at current index.

    # print(arr[idx]) => before you go to print remaining array, I can print myself.

    # f(arr, idx+1, n) => assume that we can correctly print the remaining array using f.

*/

#include<iostream>

void f(int *arr, int idx, int n){
    // base case
    if(idx==n) return;
    // self case
    std::cout<<arr[idx]<<"\n";
    // assume that --> it will print remaining array
    f(arr, idx+1, n);
}

int main(){

    int n = 5;
    int arr[] = {6, 1, 9, 3, 4};
    f(arr, 0, n);
    return 0;
}