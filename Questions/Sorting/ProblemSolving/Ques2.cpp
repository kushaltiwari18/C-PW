/* Given an array of names of tht fruits; you are supposed to sort it in lexicographical order using the selection sort. */

#include<iostream>
#include<cstring>
using namespace std;

void selectionSort(char fruits[][60], int n){
    for(int i=0; i<n-1; i++){
        // finding the minimum element
        int min_idx = i;
        for(int j=i+1; j<n; j++){
            if(strcmp(fruits[min_idx],fruits[j] )> 0){
                min_idx = j;
            }
        }
        // place the minimum element
        if (i != min_idx){
            swap(fruits[i],fruits[min_idx]);
        }
    }
    return;
}

int main(){

    char fruits[][60] = {"papaya", "lime", "watermelon", "apple", "mango", "kiwi"};
    int n = sizeof(fruits)/sizeof(fruits[0]);

    selectionSort(fruits, n);

    for(int i=0; i<n; i++){
        cout<<fruits[i]<<" ";
    }
    cout<<endl;
    return 0;
}