// Given n integers, find the second smallest integer in the list.

#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Number Of Elements : "<<endl;
    cin>>n;

    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    set<int> s;

    for(auto value:v)
    {
        s.insert(value);
    }

    auto itr = s.begin();
    advance(itr, 1);
    cout<<"Second Smallest Element : "<<*itr<<endl;
    return 0;
}