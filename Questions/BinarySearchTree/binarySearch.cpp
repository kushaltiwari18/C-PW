#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> &input, int target){
    // define search space
    int low = 0; // start the search space
    int high = input.size()-1; // end of search space
    while(low<=high){
        // calculate midpoint for the search space
        int mid = (low+high)/2;
        if(input[mid]==target) return mid;
        else if(input[mid]<target){
            // discard the left of mid
            low = mid + 1;
        }else{
            
            // discard the right of mid
            high = mid -1;
        }
    }
    return -1;
}

int main(){
    vector<int> input{2, 4, 5, 7, 15, 24, 45, 50};
    int target = 50;
    cout<<binarySearch(input, target)<<endl;
    return 0;
}

/*
T = o(logn)
S = o(logn)
*/