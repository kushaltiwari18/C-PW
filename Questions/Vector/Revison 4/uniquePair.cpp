#include<iostream>
using namespace std;

int main(){

    int arr[]={-2, -1, 0, 3, 6, 8, 11, 12};
    int n = 8;
    int x = 15;

    int i = 0;
    int j = n-1;
    int answere = 0;

    while(i<j){
        if(arr[i]+arr[j]==x){
        // we found a pair
            answere +=1;
            i++;
            j--;
        }else if(arr[i]+arr[j]<x){
            i++;
        }else{
            j--;
        }
    }

    cout<<answere;

    return 0;
}