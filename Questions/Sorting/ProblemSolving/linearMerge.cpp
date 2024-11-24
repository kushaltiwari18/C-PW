/* Input:
   num1[] = {5, 8, 10}
   num2[] = {2, 7, 8}
   Output:
   num3[] = {2, 5, 7, 8, 8, 10}
*/

#include<iostream>
using namespace std;

void merge(int arr1[], int n1, int arr2[], int n2, int arr3[]){
    int i=0; // array 1
    int j=0; // array 2
    int k=0; // array 3

    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
        }else{
            arr3[k++]=arr2[j++];
        }
    }
    while(i<n1){
        arr3[k++]=arr1[i++];
    }
    while(j<n2){
        arr3[k++]=arr2[j++];
    }
}

int main(){

    int arr1[] = {5, 8, 10};
    int arr2[] = {2, 7, 8};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    int n3 = n1+n2;
    int arr3[n3];
    merge(arr1, n1, arr2, n2, arr3);
    for(int i=0; i<n3; i++){
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
}