/* Given a sorted integer array and integer 'x', find the upper bound of x. */

#include<iostream>
#include<vector>
using namespace std;

int upperBound(vector<int> &input, int target){
    int low = 0;
    int high = input.size()-1;
    int ans = -1;
    while(low<=high){
      int mid = low + (high-low)/2;
      if(input[mid]<=target){
        low = mid + 1; 
      }else {
        high = mid - 1;
      }
      // else{
      //    if(input[mid]==target){
      //       ans = mid;
      //       high = mid - 1;
      //   }else if(input[mid]>target){
      //       high = mid -1;
      //   }else{
      //       low = mid + 1;
      //   }
      // }
    }
    return low;
}

int main(){

  vector<int> input; 
  int n;
  cin>>n;
  while(n--){
    int x;
    cin>>x;
    input.push_back(x);
  }
    int target;
    cin>>target;
    cout<<upperBound(input, target);
    return 0;
}