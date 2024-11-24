#include<iostream>
#include<vector>
using namespace std;

bool checkPrefixSuffixSum(vector<int> &v){

    int total_sum = 0;
    for(int i=0; i<v.size(); i++){
        total_sum += v[i];
    }
    // 6 2 4 3 1
    // total sum = 16
    // prefixSum = 6 8
    // suffix = 10 8
    int prefix_sum=0;
    for(int i=0; i<v.size(); i++){
        prefix_sum += v[i];
        int suffix_sum = total_sum - prefix_sum;
        if(suffix_sum == prefix_sum){
            return true;
        }
    }
    return false;
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

    cout<<checkPrefixSuffixSum(v)<<endl;
    return 0;
}