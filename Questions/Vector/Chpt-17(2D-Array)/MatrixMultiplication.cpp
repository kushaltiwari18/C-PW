// ? Multiplication of two matrix logic

// [1 2]   [5 6]  =   [1*5+2*7  1*6+2*8]
// [3 4]   [7 8]  =   [3*5+4*7  3*6+4*8]

// C[0][0] = A[0][0]*B[0][0] +A[0][1]*B[1][0]
// A --> [0][0 to c1]
// B --> [0 to r1][0]
// c1 = r2

#include<iostream>
using namespace std;

int main(){


    int r1, c1;
    cin>>r1>>c1;

    int A[r1][c1];
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            cin>>A[i][j];
        }
    }

    int r2, c2;
    cin>>r2>>c2;

    int B[r2][c2];
    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
                cin>>B[i][j];
        }
    }


    if(c1!=r2){
        cout<<"Matrix Mutiplication not possible for this input"<<endl;
    }

    int C[r1][c2];
    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            int value = 0;
            for(int k=0; k<r2; k++){
                value += A[i][k]*B[k][j];
            }
            C[i][j] = value;
        }
    }

    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    } 

    return 0;
}