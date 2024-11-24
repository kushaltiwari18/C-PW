/* A rotated sorted array is a sorted aaray on which rotation operation has been performed some number of times.
   Given a rotated sorted array, find the index of the minimum element in the array. Follow 0 based indexing.
   It is guaranteed that all the element in array are unique.
   Input: arr = [3, 4, 5, 1, 2, 3]
   Output: 3
*/

#include<iostream>
#include<vector>
using namespace std;

int minSortedRotated(vector<int> &input){
    if(input.size()==1) return input[0];
    int low = 0, high = input.size()-1;
    if(input[low]<input[high]){
        // sorted array
        return low;
    }
    while(low<=high){
        int mid = low + (high - low)/2; // mid of array
        if(input[mid]>input[mid+1]) return mid+1; // 
        if(input[mid]<input[mid-1]) return mid;
        if(input[mid]>input[low]){
            low = mid+1; // discard left
        }else{
            high = mid-1; // discard right
        }
    }
    return -1;
}

int main(){

    int n;
    cin>>n;
    vector<int> input;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        input.push_back(x);
    }
    cout<<minSortedRotated(input)<<"\n";
    return 0;
}
