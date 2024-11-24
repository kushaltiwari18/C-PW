#include<iostream>
using namespace std;
#include<limits.h>

int secondLargest(int array[], int size){
    int max = INT_MIN;
    int secondMax = INT_MIN;

    for(int i=0; i<size; i++){
        if(array[i]>max){
            max=array[i];
        }
    }

    for(int i=0; i<size; i++){
        if(array[i]>secondMax && array[i]!=max){
            secondMax=array[i];
        }
    }
    return secondMax;
}

int main(){

    int array[] = {2, 3, 5, 7, 6, 1};
    int size = sizeof(array)/sizeof(array[0]);
    int secondLargestNumber = secondLargest(array, size);
    cout<<secondLargestNumber<<endl;


    return 0;
}