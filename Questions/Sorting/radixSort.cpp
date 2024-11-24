// Radix Sort
/* 170 45 75 90 802 2          1st pass--> once place
   170 90 802 02 45 75         2nd pass--->tens place   
   802 002 045 170 075 090     3rd pass--->hundred place
   2 45 75 90 170 802          Final sorted array
*/

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void countSort(vector<int> &v, int pos){
    int n =v.size();
    
    // create freq array
    vector<int> freq(10, 0);
    for(int i=0; i<n; i++){
        freq[((v[i]/pos)%10)]++;
    }

    // cummulative freq
    for(int i=1; i<10; i++){
        freq[i] += freq[i-1];
    }

    // ans array
    vector<int> ans(n);
    for(int i=n-1; i>=0; i--){
        ans[--freq[(v[i]/pos)%10]] = v[i];
    }

    // copy to original
    for(int i=0; i<n; i++){
        v[i] = ans[i];
    }
}

// Radix sort code

void radixSort(vector<int> &v){
    int max_elem= INT_MIN;
    for(auto x:v){
        max_elem = max(x,max_elem);
    }
    for(int pos=1; max_elem/pos>0; pos *= 10){
        countSort(v, pos);
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    radixSort(v);
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}