/* You are given an array of integers nums, there is a sliding window of size k, which is moving from
   the very left of the array to the very right. You can only see the  k numbers in the window, each 
   time the sliding window moves right by one position. Return the max sliding window which basically
   contains the max elements in each window.
 */


#include<iostream>
#include<deque>
#include<vector>
using namespace std;

vector<int> maxSlidingWindow(vector<int> &arr, int k){
    deque<int> dq;
    vector<int> res;
    for(int i=0; i<k; i++){
        while(not dq.empty() and arr[dq.back()] < arr[i]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    res.push_back(arr[dq.front()]);
    for(int i=k; i<arr.size(); i++){
        int curr = arr[i];
        if(dq.front() == (i-k)) dq.pop_front();
        while(not dq.empty() and arr[dq.back()] < arr[i]){
            dq.pop_back();
        }
        dq.push_back(i);
        res.push_back(arr[dq.front()]);
    }
    return res;
}

int main(){

    vector<int> arr;
    arr.push_back(1);
    arr.push_back(3);
    arr.push_back(-1);
    arr.push_back(-3);
    arr.push_back(5);
    arr.push_back(3);
    arr.push_back(6);
    arr.push_back(7);  // Manually adding elements
    int k = 3;
    vector<int> result = maxSlidingWindow(arr, k);
    
    cout << "Maximums in each sliding window of size " << k << " are: ";
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}