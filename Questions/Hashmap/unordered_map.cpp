// Unordered map (implement using hashing)
// -STl container, stores key-value pair.
// -Elements are stored in any order.
// -key will be unique.
// insert, delete, search, find, count, size, empty, max_size, erase, clear


#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<int, string, greater<int>> record;
    // roll no, name
    record.insert(make_pair(3, "mia"));
    record[1] = "sia";
    record[2] = "tia";
    record[3] = "animush";
    for(auto pair : record){
        cout<<"Roll No : "<<pair.first<<" Name : "<<pair.second<<endl;
    }
}