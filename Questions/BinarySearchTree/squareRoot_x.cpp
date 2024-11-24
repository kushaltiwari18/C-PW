/* Find the square of root of the given non negative value of x.
    Round it off to the nearest floor integer value.
    i/p => x = 4, o/p => 2
    i/p => x = 11 o/p => 3
*/

#include<iostream>
using namespace std;

int sqrt(int x){
    int low = 1, high =x, ans = -1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(mid*mid<=x){
            ans = mid;
            low = mid+1;
        }else{
            high = mid -1;
        }
    }
    return ans;
}

int main(){

    cout<<sqrt(40)<<"\n";

    return 0;
}