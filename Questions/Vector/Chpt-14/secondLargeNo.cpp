#include<iostream>
using namespace std;
#include<climits>

int largest_Element(int array[], int size){
        int max = INT_MIN;
        int maxi = -1;
        for(int i=0; i<size; i++){
            if(array[i]>max){
                max=array[i];
                maxi=i;
            }
        }
        return maxi;
    }

int main(){

    int array[]={2, 3, 5, 7, 6, 1};
    int size = sizeof(array)/sizeof(array[0]);
    int indexOfLargest = largest_Element(array, size);

    int largestElement = array[indexOfLargest];
    for(int i=0; i<size; i++){
        if(array[i]==largestElement){
            array[i]=-1;
        }
    }

    int indexOfSecondLargest = largest_Element(array,size);
    cout<<"Second Largest number: "<<array[indexOfSecondLargest]<<endl;
    cout<<"Largest number: "<<largestElement<<endl;

    return 0;
}