// Count sort = Stable stable sorting algorithm
/* 5 2 3 2 1  --> size = 6
1) At first we create a frequency array of n+1 size i.e n=6.
   0 1 2 1 0 1
2) Next we create a cumulative frequency array.
   0 1 3 4 5 5
3) Next last we calculate and travese the original array with comparing with cumulative index and decrease by 1 and update 
   1 2 2 3 5   n=5
4) At last we make a temp ans array and replace it with original array. n=5
*/

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void countSort(vector<int> &v){
    int n = v.size();

    // find the maximum element
    int max_elem=INT_MIN;
    for(int i=0; i<n; i++){
        max_elem = max(v[i],max_elem);
    }
    
    // create frequency array
    vector<int> freq(max_elem+1,0);
    for(int i=0; i<n; i++){
        freq[v[i]]++;
    }

    // calculate cummulative frequency
    for(int i=1; i<=max_elem; i++){
        freq[i] += freq[i-1];
    }

    // calculated the sorted array
    vector<int> ans(n);
    for(int i=n-1; i>=0; i--){
        ans[--freq[v[i]]] = v[i];
    }

    // copy back ans array to original array
    for(int i=0; i<n; i++){
        v[i]=ans[i];
    }
    return;
}

int main(){

    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    countSort(v);
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}

