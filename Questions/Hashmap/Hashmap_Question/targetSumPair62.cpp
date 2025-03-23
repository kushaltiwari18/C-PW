/* Given an array of length n and a target sum, return a pair of index whose sum is equal to target sum. If there is no such pair then return -1.
Input: [1,4,5,11,13,10,2], target = 13, n=7
Output:[ 3 6]

*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> targetSumPair(vector<int> &v, int target){

    unordered_map<int, int> m;
    vector<int> ans(2, -1);
    for(int i=0; i<v.size(); i++){
        if(m.find(target -v[i]) != m.end()){
            ans[0] = m[target - v[i]];
            ans[1] = i;
            return ans;
        }else{
            m[v[i]] = i;
        }
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int target;
    cin>>target;

    vector<int> ans = targetSumPair(v, target);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}