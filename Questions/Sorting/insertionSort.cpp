#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int> &v){
    int n = v.size();

    for(int i=1; i<n; i++){
        int curr_elem = v[i];

        // finding the correct position for curr_elem
        int j = i-1;
        while(j>=0 && v[j] > curr_elem){
            v[j+1] = v[j];
            j--;
        }

        // insert curr_elem
        v[j+1] = curr_elem;
    }
return ;
}

int main(){

    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    insertionSort(v);

    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}