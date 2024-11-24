#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int> v(n+1,0);

    for(int i=1; i<=n; i++){
        cin>>v[i];
    }
    // 5 1 2 3 4 --> array
    // to claculate prefix_sum
    // 0 5 1 2 3 4 
    // 0 5 6 8 11 15
    for(int i=1; i<=n; i++){
        v[i]=v[i-1] + v[i];
    }

    int q;
    cin>>q;

    while(q--){
        int l, r;
        cin>>l>>r;

        int ans = 0;
        // ans = prfixSumArray[r]-prefixSumArray[l]
        ans = v[r] - v[l-1];
        cout<<ans<<endl;
    }

    return 0;
}