// Sum Of Repetitive Elements in an Array
// i/p = [1, 1, 2, 1, 3, 3, 3]  o/p =


#include<iostream>
#include<map>
using namespace std;

int main()
{
    int arr[] = {1, 1, 2, 1, 3, 3, 3};

    map<int, int> m;
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        m[arr[i]] = m[arr[i]] + 1;
    }

    int sum = 0;
    // find sum of all repetitive elements
    for(auto pair : m){
        if(pair.second > 1){
            sum += pair.first;
        }
    }

    cout<<"Sum of Repetitive Elements : "<<sum<<endl;
    return 0;
}