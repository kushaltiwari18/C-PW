#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void bucketSort(float arr[], int size){
    // step : 1
    vector<vector<float>> bucket(size, vector<float> ());

    // max element && min element
    float max_element = arr[0];
    float min_element = arr[0];
    for(int i=1; i<size; i++){
        max_element = max(max_element, arr[i]);
        min_element = min(min_element, arr[i]);
    }
    float range = (max_element - min_element)/size;


    // step : 2 inserting elements into bucket
    for(int i=0; i<size; i++){
        // ! int index = arr[i]*size;
        int index = (arr[i] - min_element)/range;
        // boundary elements
        float diff = (arr[i] - min_element)/range - index;
        if(diff==0 && arr[i]!=min_element){  
        bucket[index-1].push_back(arr[i]);
        }else{
        bucket[index].push_back(arr[i]);
        }
    }


    // step : 3 sorting individual bucket
    for(int i=0; i<size; i++){
        if(!bucket[i].empty()){
            sort(bucket[i].begin(), bucket[i].end());
        }
    }

    // step : 4 combining element from bucket
    int k=0;
    for(int i=0; i<size; i++){
        for(int j=0; j<bucket[i].size(); j++){
            arr[k++] = bucket[i][j];
        }
    }
}

int main(){

    float arr[] = {6.13, 8.45, 0.12, 1.89, 4.75, 2.63, 7.85, 10.39};
    int size = sizeof(arr)/sizeof(arr[0]);
    bucketSort(arr, size);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}