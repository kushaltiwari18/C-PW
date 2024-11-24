#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    int n;
    cout<<"Enter vector size: "<<endl;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<v.size(); i++){
        cin>>v[i];
    }

    const int N = 1e5 +10;
    vector<int> freq(N,0);
    for(int i=0; i<n; i++){
        freq[v[i]]= freq[v[i]]+1;
    }

    cout<<"Enter queries: ";
    int q;
    cin>>q;
    while(q--){
        int queryelement;
        cin>>queryelement;
        cout<<freq[queryelement]<<endl;
    }
    return 0;
}