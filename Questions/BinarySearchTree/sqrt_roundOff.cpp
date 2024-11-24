/* Find the square root of the given non-negative value of x
   Round it off to the nearest floor integer value.
   i/p => x = 4
   o/p => 2
*/

#include<iostream>
using namespace std;

int sqrt(int x){
    int low = 1, high = x, ans = -1;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(mid*mid <= x){
            ans = mid;
            low = mid +1;
        }else{
            high = mid-1;
        }
    }
    return ans;
}

int main(){

    cout<<sqrt(24)<<"\n";

    return 0;
}