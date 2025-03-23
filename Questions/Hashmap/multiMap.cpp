// multimap
// -STL container, stores key-value pair.
// -Elements are stored in any order.
// -key can be duplicate.
// -insert, delete, search, find, count, size, empty, max_size, erase, clear

#include<iostream>
#include<map>
using namespace std;

int main(){

    multimap<string,int > record;
    // name, phone
    record.insert(make_pair("mia", 876543));
    record.insert(make_pair("urvi", 654321));
    record.insert(make_pair("saghvi", 900876));
    record.insert(make_pair("mia", 123456));

    for(auto pair : record){
        cout<<"Name : "<<pair.first<<","<<" Phone : "<<pair.second<<endl;
    }

    return 0;
}