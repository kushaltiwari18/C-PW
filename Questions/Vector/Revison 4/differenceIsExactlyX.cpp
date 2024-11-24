#include<iostream>
using namespace std;

int main(){

    // int arr[]={5, 10, 15, 20, 25};
    int arr[]={9, 23, 45, 69, 78};
    // int arr[]={10, 15, 25, 50, 65};
    int n=5;
    int x=10;

    int i=0;
    int j=
    1;
    bool found = false;
    while(i<n && j<n){
        if(abs(arr[i]-arr[j])==x){
            found=true;
            break;
        }else if(abs(arr[i] -arr[j])<x){
            j++;
        }else{
            i++;
        }
    }

    if(found==true) cout<<"yes";
    else cout<<"no";

    return 0;
}
