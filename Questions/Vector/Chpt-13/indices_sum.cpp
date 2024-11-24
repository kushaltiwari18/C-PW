#include<iostream>
using namespace std;

int main(){

    int array[] = {1, 2, 1, 2, 1, 20};
    int ansSum = 0; //-1+2-1+2-1+20

    for(int i=0; i<sizeof(array)/sizeof(array[0]);i++){
        if(array[i]%2==0){
            ansSum += array[i];
        }else{
            ansSum -= array[i];
        }
    }

    cout<<ansSum<<endl;

    return 0;
}