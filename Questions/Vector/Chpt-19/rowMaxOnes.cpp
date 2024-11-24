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


int maximumOnesRow(vector<vector<int>> &v){
    int maxOnes = INT_MIN;
    int maxOnesRow = -1;
    int col = v[0].size();

    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v[i].size(); j++){
            if(v[i][j]== 1){
                int numberOfOnes = col -j;
                if(numberOfOnes>maxOnes){
                maxOnes = numberOfOnes;
                maxOnesRow = i;
                }
                break;
            }
        }
    }
    return maxOnesRow;
}

int main(){

    int n, m;
    cin>>n>>m;

    vector<vector<int>> vec(n, vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>vec[i][j];
        }
    }

    int res = maximumOnesRow(vec);
    cout<<res<<endl;


    return 0;
}