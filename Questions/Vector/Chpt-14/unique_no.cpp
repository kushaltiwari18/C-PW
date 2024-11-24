#include<iostream>
using namespace std;

int main(){

    int array[] = {2, 3, 1, 3, 2, 4, 1};
    int size = sizeof(array)/sizeof(array[0]);

    for(int i = 0; i<size; i++){
        for(int j = i+1; j<size; j++){
            if(array[i]==array[j]){
                array[i]=array[j]=-1;
            }
        }
    }

    int unique = 0;
    for(int i =0; i<size; i++){
        if(array[i]>0){
            unique=array[i];
        }
    }

    cout<<"Unique number in element is : "<<unique<<endl;
    cout<<sizeof(array)<<"/";
    return 0;
}