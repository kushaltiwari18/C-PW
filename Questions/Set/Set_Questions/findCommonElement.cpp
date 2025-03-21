#include<iostream>
#include<set>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Number Of Elements In First Array : "<<endl;
    cin>>n;
    vector<int> arr1(n);
    cout<<"Enter Elements Of First Array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }

    int m;
    cout<<"Enter Number Of Elements In Second Array : "<<endl;
    cin>>m;
    vector<int> arr2(m);
    cout<<"Enter Elements Of Second Array : "<<endl;
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }

    int ans_sum = 0;
    set<int> s1;
    for(auto elem : arr1){
        s1.insert(elem);
    }

    for(auto elem : arr2){
        if(s1.find(elem) != s1.end()){
            ans_sum += elem;
        }
    }

    cout<<"Sum Of Common Elements : "<<ans_sum<<endl;

    return 0;
}