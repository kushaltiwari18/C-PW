#include<iostream>
using namespace std;

int main(){

    int array[] = {1, 2, 3, 4, 5, 6};
    bool sortedFlag = true;
    int length = sizeof(array)/sizeof(array[0]);

    for(int i=1; i<length; i++){
        if(array[i]<array[i-1]){
            sortedFlag = false;
        }
    }

    cout<<sortedFlag<<endl;

    return 0;
}