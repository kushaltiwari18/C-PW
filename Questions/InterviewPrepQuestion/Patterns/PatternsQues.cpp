#include<iostream>
using namespace std;

int main(){

    int n , m;
    cout<<"Enter rows and column :-"<<endl;
    cin>>n>>m;

    // for rectangle number pattern
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=6; j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    // for hollow rectangle number
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=m; j++){
    //         if( i==1 || i==n ){
    //             cout<<j;
    //         }else if(j==1 || j==m){
    //             cout<<j;
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // reactangle with 1,2 numbers
    // for(int i = 1; i<=n; i++){
    //     for(int j=1; j<=m; j++){
    //         if((i+j)% 2 == 0){
    //             cout<<"1";
    //         }else{
    //             cout<<"2";
    //         }
    //     }
    //     cout<<endl;
    // }


    // half traingle nuber
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i;j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

    // taringle with row number
    // for(int i =1; i<=n; i++){
    //     for(int j=1; j<=(n-i); j++){
    //         cout<<"*";
    //     }
    //     for(int j=1; j<=i; j++){
    //         cout<<j;
    //     }
    //     for(int k=(i-1); k>=1; k--){
    //         cout<<k;
    //     }
    //     cout<<endl;
    // }

    // hollow traingle
    // for(int i =1; i<=n; i++){

    //     for(int j=1; j<=(n-i); j++){
    //         cout<<" ";
    //     }
    //     // loop will run for 1 to 2*i-1 i.e 1,3,5,7
    //     // for 1st row i=1 => 2*1-1 = 1
    //     // for 2nd row i=2 => 2*2-1 = 3
    //     // for 3rd row i=3 => 2*3-1 = 5
    //     // for 4th row i=4 => 2*4-1 = 7
    //     for(int j=1; j<=(2*i -1); j++){
            
    //         if(i==n || j==1 || j ==(2*i-1)){
    //             cout<<i;
    //         }else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }


    //  Print alphabetical diamond

    //  upper half
    for(int i = 1; i<=n; i++){
        // space
        for(int j = 1; j<=n-i; j++){
            cout<<" ";
        }
        // first half increasing
       char ch = 'A';
       for(int j = 1; j<=i; j++){
            cout<<ch++;
       }

       // first half decreasing
       ch -=2;
       for(int k=(i-1); k>=1; k--){
            cout<<ch--;
       }
        cout<<endl;
    }

    // bottom half
    for(int i = (n-1); i>=1; i--){
        // space
        for(int j = 1; j<=n-i; j++){
            cout<<" ";
        }
        // first half increasing
       char ch = 'A';
       for(int j = 1; j<=i; j++){
            cout<<ch++;
       }

       // first half decreasing
       ch -=2;
       for(int k=(i-1); k>=1; k--){
            cout<<ch--;
       }
        cout<<endl;
    }



    return 0;
}