#include<iostream>
using namespace std;

int main(){
    int arr[] = {0, 1, 2, 3, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int low = 0;
    int high = n-1;
    int  missing = n;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid] == mid){
            low = mid + 1;
        }else{
            missing = mid;
            high = mid - 1;
        }
    }
    cout<<missing;
    return 0;
}