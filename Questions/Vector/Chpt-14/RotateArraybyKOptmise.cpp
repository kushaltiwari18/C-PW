#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    // vector can be initialized
    vector<int> v{1, 2, 3, 4, 5};
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(5);

    int k = 2;
    k%v.size();

    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());

    for(int a:v){
        cout<<a<<" ";
    }
    return 0;
}