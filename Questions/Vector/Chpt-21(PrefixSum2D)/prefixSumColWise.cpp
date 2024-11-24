#include<iostream>
#include<vector>
using namespace std;

int rectangleSum(vector<vector<int>> &V, int l1, int r1, int l2, int r2){

    int sum =0;

    // prefix sum array row-wise

    for(int i=0; i<V.size(); i++){
        for(int j=1; j<V[0].size(); j++){
            V[i][j] += V[i][j-1];
        }
    }

    // prefix sum column-wise

    for(int i=1; i<V.size(); i++){
        for(int j=0; j<V[0].size(); j++){
            V[i][j]  += V[i-1][j];
        }
    }

    // printing prefix sum 2D Array

    for(int i=0; i<V.size(); i++){
        for(int j=0; j<V[0].size(); j++){
            cout<<V[i][j]<<" ";
        }
        cout<<endl;
    }


    int topSum = 0, leftSum = 0, top_left_Sum =0;

     if( l1!=0) topSum = V[l1-1][r2];
     if( r1!=0) leftSum = V[l2][r1-1];
     if( l1!=0 && r1!=0) top_left_Sum = V[l1-1][r1-1];

    sum = V[l2][r2] - topSum - leftSum + top_left_Sum;

    return sum;
}

int main(){

int n,m;
cin>>n>>m;

vector<vector<int>> V(n,vector<int> (m));

for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cin>>V[i][j];
    }
}

int l1, r1, l2, r2;
cout<<"Enter co-ordinate: "<<endl;
cin>>l1>>r1>>l2>>r2;

for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cout<<V[i][j]<<" ";
    }
    cout<<endl;
}

int res = rectangleSum(V, l1, r1, l2, r2);
cout<<res<<endl;


return 0;
}