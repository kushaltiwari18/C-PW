/*  Given an array of integer 'a' that is sorted in non -decreasing order.
    Find the first and last position of the given 'target' element in sorted array.
    Follow 0 based indexing. If 'target' is not found in the array, return [-1,-1].
*/

#include <iostream>
#include <vector>
using namespace std;

int lowerbound(vector<int> &input, int target){ 
    // first index target
    int low = 0;
    int high = input.size()-1;
    int ans = -1;
    while (low <= high){
        int mid = low + (high - low) / 2;
        if (input[mid] >= target){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}

int upperbound(vector<int> &input, int target){ 
    // last index target
    int low = 0;
    int high = input.size()- 1;
    int ans = -1;
    while (low <= high){
        int mid = low + (high - low)/2;
        if (input[mid] > target){
            ans = mid;
            high = mid - 1; // discard right
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}

int main(){

    int n;
    cin >> n;
    vector<int> input;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        input.push_back(x);
    }
    int target;
    cin >> target;
    vector<int> result;
    int LB = lowerbound(input, target);
    if (input[LB] != target){
        result.push_back(-1);
        result.push_back(-1);
    }
    else
    {
        int UB = upperbound(input, target);
        result.push_back(LB);
        result.push_back(UB-1);
    }
    cout << result[0] << " " << result[1] << endl;
    return 0;
}