/* Method 2: Pre-Calculating the horizontal sum for each row in the matrix. */
/* 
   arr[l] = arr[0]...............arr[l] 
   arr[r] = arr[0]+.....arr[l]+.......arr[r] 
   Sum = arr[r] - arr[l-1]

*/

#include<iostream>
#include<vector>
using namespace std;

int horizontalSum(vector<vector<int>> &v, int l1, int r1, int l2, int r2){ // 1 1 2 2

    int sum = 0;
    
    // prefix sum array row-wise

    for(int i=0; i<v.size(); i++){
        for(int j=1; j<v[0].size(); j++){
            v[i][j] += v[i][j-1];
        }
    }

    for(int i=l1; i<=l2; i++){
        if(r1!=0){
            sum += v[i][r2] - v[i][r1 -1];
        }
        else{
            sum += v[i][r2];
        }
    }
    return sum;
}

int main(){

    int n, m;
    cin>>n>>m; 

    vector<vector<int>> matrix(n, vector<int> (m));

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>matrix[i][j];
        }
    }

    int l1, r1, l2, r2;
    cout<<"Enter co-ordinate :"<<endl;
    cin>>l1>>r1>>l2>>r2;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    int total = horizontalSum(matrix, l1, r1, l2, r2);
    cout<<total<<endl;

    return 0;
}