#include<iostream>
#include<vector>
using namespace std;

void sortedZeroOnes(vector <int> &v){
    int zeroCount = 0;
    for( int elem:v){ // counting zero
        if(elem==0){
            zeroCount++;
        }
    }

    for(int i=0; i<v.size(); i++){
        if(i<zeroCount){
            v[i]=0;
        }else{
            v[i]=1;
        }
    }
}

int main(){

    int n;
    cin>>n;

    vector <int> v;
    
    for(int i=0; i<n; i++){
        int element;
        cin>>element;
        v.push_back(element);
    }

    sortedZeroOnes(v);

    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }

    return 0;
}