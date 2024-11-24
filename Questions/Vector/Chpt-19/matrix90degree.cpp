/* Given a square matrix, turn it by 90 degree in a clockwise direction
   without using any extra space

   1 2 3        7 4 1
   4 5 6        8 5 2
   7 8 9        9 6 3

*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotateArray(vector<vector<int>> &v){
    int n = v.size();
     // transpose
     for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            swap(v[i][j], v[j][i]);
        }
     }

     // reverse every row
     for(int i=0; i<n; i++){
        reverse(v[i].begin(), v[i].end());
     }
}

int main(){

    int n;
    cin>>n;

    vector<vector<int>> vec(n, vector<int> (n));

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>vec[i][j];
        }
    }

    rotateArray(vec);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}