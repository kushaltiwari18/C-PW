#include<iostream>
using namespace std;

int main(){

    int arr0[]={1, 6, 7, 10};
    int arr1[]={0, 1, 3, 8, 11, 12, 15, 18};
    int m = 4;
    int n = 8;

    int result[m+n];
    int i =0;
    int j =0;
    int k =0;

    while(i<n && j<m){
    // both i and j should be within the limits of arr0 and arr1
        if(arr0[i]<arr1[j]){
        result[k]=arr0[i];
        k++;
        i++;
        }else{
            result[k]=arr1[j];
            k++;
            j++;
        }
    }

    while(i<n){
        // arr1 was exhausted and we still got element left in arr0
        result[k] =arr0[i];
        k++;
        i++;
    }
    
    while(j<m){
        // arr0 was exhausted and we still got element left in arr1
        result[k]=arr0[j];
        k++;
        j++;
    }

    // display result

    for(int i=0; i<(m+n); i++){
        cout<<result[i]<<" ";
    }

    return 0;
}