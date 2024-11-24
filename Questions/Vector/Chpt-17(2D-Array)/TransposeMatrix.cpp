// [1 2 3]    [1 4]
// [4 5 6]    [2 5]
//            [3 6]

// ! Transpose  a[i][j]=aT=[j][i]

#include<iostream>
using namespace std;

int main(){

    int n, m;
    cin>>n>>m;

    int array[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>array[i][j];
        }
    }

    int transpose[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            transpose[i][j]=array[j][i];
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}