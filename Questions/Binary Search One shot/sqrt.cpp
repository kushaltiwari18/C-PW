#include<iostream>
using namespace std;

int sqrt(int &x){
    if(x<=1)return 1;
    int ans = -1;
    int low = 0, high = x;
    while(low<=high){
    int mid = low + (high - low)/2;
    if(mid*mid == x) return mid;
    else if(mid*mid>x) high = mid -1;
    else {
        low = mid + 1;
        ans = mid;
    }
    }
    return ans;
}

int main(){

    int x;
    cout<<"Enter x: ";
    cin>>x;
    cout<<sqrt(x)<<"\n";
    return 0 ;
}