#include<iostream>
#include<vector>
using namespace std;


int binarySearchRecursive(vector<int> &input, int target, int low, int high){
    // base case
    if(low>high) return -1;
    // self work
    int mid = low +(high-low)/2;  // modified mid to tackle overflow.
    if(input[mid]==target) return mid;
    if(input[mid]<target){
    return binarySearchRecursive(input, target, mid+1, high);
    }else{
        return binarySearchRecursive(input, target, low, mid-1);
    }
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
    int target;
    cin>>target;
    cout<<binarySearchRecursive(input, target, 0, n-1)<<endl;
    return 0;
}