/* Search in roated sorted array[] = { 8, 9, 10, 11, 1, 2, 3, 4, 5, 6, 7} */

#include<iostream>
#include<vector>
using namespace std;

int search(vector<int> &input, int target){
    int n = input.size();
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(input[mid] == target) return mid;
        else if(input[mid] >= input[low]){
            // left half sorted
            if(target>=input[low] && target<=input[mid]){
                // remove the right half
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }else{
            // right half sorted
            if(target>=input[mid] && target<=input[high]){
                // remove the left half
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
    cout<<"Enter size : ";
    cin>>n;
    vector<int> input;
    while(n--){
        int x;
        cin>>x;
        input.push_back(x);
    }
    int target;
    cout<<"Enter target : ";
    cin>>target;
    cout<<search(input, target);
    return 0;
}