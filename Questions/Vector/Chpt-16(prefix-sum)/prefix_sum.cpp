#include<iostream>
#include<vector>
using namespace std;

void prefixSum(vector<int> &v){
    for(int i=1; i<v.size(); i++){
        v[i] += v[i-1];
    }
    return;
}

int main(){

    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int elements;
        cin>>elements;
        v.push_back(elements);
    }
    prefixSum(v);

    for(int i =0; i<n; i++){
        cout<<v[i]<<" ";
    }    

    return 0;
}