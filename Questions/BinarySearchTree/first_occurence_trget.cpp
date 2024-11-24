#include<iostream>
#include<vector>
using namespace std;

int firstOccurence(vector<int> &input, int target){  // 2 5 5 5 6 6 8 8 9 9

    int low = 0 , high = input.size()-1, ans = -1;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(input[mid]==target){
            ans = mid;
            high = mid - 1;
        }else if(input[mid]>target){
            high = mid -1;
        }else{
            low = mid + 1;
        }
    }
    return ans;

}

int main(){

    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int target;
    cin>>target;
    cout<<firstOccurence(arr, target)<<"\n";
    return 0;
}