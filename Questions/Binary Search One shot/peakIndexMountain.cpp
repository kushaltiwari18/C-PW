/* Peak index in mountain array */
/* 1 2 4 6 8 6 4 3 0 -1
   [ arr[i-1] < arr[i] > arr[i+1] ]
   order inc :- low = mid + 1;
   order dec : - high = mid - 1;
*/

#include<iostream>
#include<vector>
using namespace std;

int peakInMountainArray(vector<int> &input){
    int n = input.size();
    int low = 1, high = n - 2;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(input[mid] > input[mid-1] and input[mid] < input[mid+1]){
            low = mid + 1;
        }else if(input[mid] < input[mid -1] && input[mid] > input[mid+1]){
            high = mid - 1;
        }else return mid;
    }
    return -24568;

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
    cout<<peakInMountainArray(input);
    
    return 0;
}