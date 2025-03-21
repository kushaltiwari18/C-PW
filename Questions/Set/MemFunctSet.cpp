#include<iostream>
#include<set>
using namespace std;


int main(){


    set<int, greater<int> > s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(10);
    s.insert(50);
    s.insert(60);   

    // size of set
    cout<<"Size -> "<<s.size()<<endl;

    // Search opertion
    if(s.find(20) != s.end()){
        cout<<"Element found"<<endl;
    }else{
        cout<<"Element not found"<<endl;
    }

    for(auto it = s.begin(); it!=s.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;


    return 0;
}