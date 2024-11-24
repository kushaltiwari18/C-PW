/* Program to find kth smallest element in an array using Quick Sort 
   Enter the elements of array
   Input: 3 5 2 1 4 7 8 6
   Enter the value of k : 5

   Output:

*/

#include<iostream>
#include<limits.h>
using namespace std;

int partition(int arr[], int first, int last){
   int pivot = arr[last];
   int i = first;
   for(int j=first; j<last; j++){
      if(arr[j] < pivot){
         swap(arr[i],arr[j]);
         i++;
      }
   }
   swap(arr[i], arr[last]);
   return i;
}

int kthSmallest(int arr[], int first, int last, int k){
   if(k>0 && k<=last-first+1){
      int position = partition(arr, first, last);

      if(position - first == k -1){
         return arr[position];
      }else if(position -first > k-1){
        return kthSmallest(arr, first, position-1, k);
      }else{
         return kthSmallest(arr, position+1, last, k-(position-first+1));
      }
   }
   return INT_MAX;
}
int main(){
int arr[] = {3, 5, 2, 1, 4, 7, 8, 6};
int n = sizeof(arr)/sizeof(arr[0]);
int k = 3;
cout<<kthSmallest(arr, 0, n-1, k)<<endl;
 return 0;
}