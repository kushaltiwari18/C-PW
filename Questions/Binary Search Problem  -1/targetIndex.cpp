/* Given the rotated sorted array of integers, which contains distinct element, and an integer target return,
   return the index of target if it is in the array. Otherwise return -1
   Input: arr = [3, 4, 5, 1, 2]
   Target: 4
   Output: 1
*/
#include<iostream>
#include<vector>
using namespace std;

int binarySearchSortedRotated(vector<int> &input, int target){
    int low = 0, high = input.size()-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(input[mid]==target) return mid;
        if(input[mid]>=input[low]){
            if(target>=input[low] & target<=input[mid]){
                high = mid - 1;
            }else{
                low = mid+1;
            }
        }else{
            if(target>=input[mid] & target<=input[high]){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
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
    int target;
    cin>>target;
    cout<<binarySearchSortedRotated(input, target)<<"\n";
    return 0;
}