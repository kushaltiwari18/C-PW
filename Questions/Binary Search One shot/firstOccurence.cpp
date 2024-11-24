#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[] = {1, 1, 2, 3, 3, 3, 5, 5, 6, 7, 7, 8};
    int low = 0;
    int high = sizeof(arr)/sizeof(arr[0]) - 1;
    int target;
    cout<<"Enter target : ";
    cin>>target;
    int index = -1;
    while(low<=high){
        int mid = low + (high -low)/2;
        if(arr[mid]==target){
            if(mid>0 and arr[mid] == arr[mid-1]){
                high = mid -1;
            }else{
                index = mid;
                break;
            }

        }
        else if(arr[mid]>target) high = mid-1;
        else low = mid +1;
    }
    cout<<index;

    return 0;
}