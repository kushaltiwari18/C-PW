/* Given an n*m matrix 'a' return all elements of the matrix in th spiral order*/

#include<iostream>
#include<vector>
using namespace std;

void spiralOrder(vector<vector<int>> &v){

    int left = 0;              // 1
    int right = v[0].size()-1; // 2 1
    int top = 0;               // 1 
    int bottom = v.size()-1;   // 2 1

    int direction = 0;

    while(left<=right && top<=bottom){
        // left-->right
        if(direction==0){
            for(int col=left; col<=right; col++){
                cout<<v[top][col]<<" ";
            }
            top++;
        }
        // top-->bottom
        else if(direction==1){
            for(int row=top; row<=bottom; row++){
                cout<<v[row][right]<<" ";
            }
            right--;
        }
        // right-->left
        else if(direction==2){
            for(int col=right; col>=left; col--){
                cout<<v[bottom][col]<<" ";
            }
            bottom--;
        }
        // bottom --> top
        else{
            for(int row=bottom; row>=top; row--){
                cout<<v[row][left]<<" ";
            }
            left++;
        }
        direction = (direction + 1) % 4;
        // 0 1 2 3  
    }
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

    spiralOrder(matrix);

    return 0;
}