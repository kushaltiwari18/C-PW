#include<iostream>
#include<set>
using namespace std;


int main(){

    set<string> inviteList;
    int n;
    cout<<"Enter Number Of Guests : "<<endl;
    cin>>n;

    while(n--){
        string name;
        cin>>name;
        inviteList.insert(name);
    }

    cout<<"Printing Invite List : "<<endl;
    for(auto name:inviteList){
        cout<<name<<endl;
    }
    cout<<endl;

    return 0;
}
