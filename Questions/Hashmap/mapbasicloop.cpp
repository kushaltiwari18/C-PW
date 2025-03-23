#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int, string> directory;
    directory[1] = "mia";
    directory[2] = "sia";
    directory[3] = "tia";
    directory[4] = "ria";
    directory[5] = "pia";
    directory[6] = "xia";

    // print all keys and values
    for(auto i = directory.begin(); i !=directory.end(); i++){
        cout<<i->first<<" -> "<<i->second<<endl;
    }

    // print all keys reverse
    // Reverse iterators are incremented (++) to move backward (not --).
    cout<<"Reverse"<<endl;
    for(auto i =directory.rbegin(); i != directory.rend(); i++){
        cout<<i->first<<" -> "<<i->second<<endl;
    }
    return 0;
}