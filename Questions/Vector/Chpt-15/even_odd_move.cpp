#include<iostream>
#include<vector>
using namespace std;

void sortByParity(vector<int> &v){

    int left_ptr = 0;
    int right_ptr = v.size()-1;

    while(left_ptr<right_ptr){
        if(v[left_ptr]%2==1 && v[right_ptr]%2==0){
            swap(v[left_ptr],v[right_ptr]);
            left_ptr++;
            right_ptr--;
        }
        if(v[left_ptr]%2==0){
            left_ptr++;
        }
        if(v[right_ptr]%2==1){
            right_ptr--;
        }
    }

}

int main(){

    int n;
    cin>>n;

    vector<int> v;
    for(int i=0; i<n; i++){
        int elements;
        cin>>elements;
        v.push_back(elements);
    }

    sortByParity(v);

    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }

    return 0;
}