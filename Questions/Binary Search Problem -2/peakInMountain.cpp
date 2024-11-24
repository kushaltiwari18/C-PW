// Pattern : Binary search to find peak element
/* Given a mountain array 'a' og length greater than 3, return the index 'i' such that
   arr[0] < arr[1] ... arr[i-1] < arr[i] > arr[i+1]....arr[arr.length()-1].
   This index is known as the peak index.
   Input : arr = [0, 4, 1, 0]
   Output : 1
*/

#include<iostream>
#include<vector>
using namespace std;

int peakInMountainArray(vector<int> &input){
    int low = 1; 
    int high = input.size()-1;
    int ans = -1;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(input[mid]>input[mid-1]){
            // increasing curve
            ans = max(ans, mid);
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return ans;
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
    cout<<peakInMountainArray(input)<<"\n";
    return 0;
}