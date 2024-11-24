/* Given a matrix 'a' of dimension n*m and 2 coordinate (l1, r1) and (l2, r2).
   Return the sum of the rectangle from (l1, r1) to (l2, r2)

   1  2  3  4
   5  6  7  8
   9  10 11 12

   (l1, r1) ---> (1, 1)
   (l2, r2) ---> (2, 2)
    6+7+10+11 => 34  

*/

#include<iostream>
#include<vector>
using namespace std;

int rectangleSum(vector<vector<int>> &v, int l1, int r1, int l2, int r2){

    int sum = 0;
    for(int i=l1; i<=l2; i++){
        for(int j=r1; j<=r2; j++){
            sum += v[i][j];
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
    cout<<"Enter the co-ordinates :"<<endl;
    cin>>l1>>r1>>l2>>r2;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    int total = rectangleSum(matrix, l1, r1, l2, r2);
    cout<<total<<endl;
    

    return 0;
}
