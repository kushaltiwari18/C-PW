/* Find the peak element, and return its index. If the array contains multiple peaks
   return the index to any of the peak.
   Input : arr = [1, 2, 1, 2, 6, 10, 3]
*/

#include<iostream>
#include<vector>
using namespace std;

int findPeak(vector<int> &input){
    int n = input.size();
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(mid==0){
            if(input[mid]>input[mid+1]){
                return 0;
            }else{
                return 1;
            }
        }else if(mid == n-1){
            if(input[mid]>input[mid-1]){
                return n-1;
            }else{
                return n-2;
            }
        }else{
            if(input[mid]>input[mid+1] && input[mid]>input[mid-1]){
                return mid;
            }else if(input[mid]>input[mid-1]){
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
cout<<findPeak(input)<<"\n";
return 0;
}