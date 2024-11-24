#include<iostream>
using namespace std;

int main(){

    int array[]={1, 2, 3, 4, 5};
    int size = sizeof(array)/sizeof(array[0]);
    int k = 2;
    // k can be greater than n
    k=k%size;
    int ansArray[5];
    int j = 0;
    // inserting last k elements in ansArray
    for(int i=size-k; i<size; i++){
        ansArray[j]=array[i];
        j++;
    }
    // inserting first(n-k) elements in ansArray
    for(int i=0; i<=k; i++){
        ansArray[j]=array[i];
        j++;
    }
    for(int i=0; i<size; i++){
        cout<<ansArray[i]<<" ";
    }


    return 0;
}