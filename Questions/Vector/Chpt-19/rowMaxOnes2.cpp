/* Given  a boolean 2D Array, where each row is sorted. Find the row 
   with the maximum number's of 1's
   0 1 1 1
   0 0 0 1
   0 0 1 1
 */ 

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int leftMostOnesRow(vector<vector<int>> &v){

    int leftMostOnes = INT_MIN;
    int maxOnesRow = INT_MIN;
    int j = v[0].size()-1;

    // finding leftmost one in 0th row

    while( j>=0 && v[0][j] == 1){
        leftMostOnes = j;
        maxOnesRow = 0;
        j--;
    }

    // check in rest of the row

    for(int i=1; i<v.size(); i++){
        while( j>=0 && v[i][j] == 1){
            leftMostOnes = j;
            maxOnesRow = i;
            j--;
        }
    }

    return maxOnesRow;

}

int main(){

    int n, m;
    cin>>n>>m;

    vector<vector<int>> vec(n, vector<int> (m));
    
    for(int i=0; i<n; i++){
        for( int j=0; j<m; j++){
            cin>>vec[i][j];
        }
    }

    int res = leftMostOnesRow(vec);
    cout<<res<<endl;

    return 0;
}