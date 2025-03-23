// Unordered Multimap
// -STL container, stores key-value pair.
// -Elements are stored in any order ascending order or decending order.
// -key can be duplicate.
// -insert, delete, search, find, count, size, empty, max_size, erase, clear
// implementation of unordered_multimap is same as unordered_map hashinh.

#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_multimap<string,int> fruitCount;
    fruitCount.insert(make_pair("apple", 10));
    fruitCount.insert(make_pair("banana", 20));
    fruitCount.insert(make_pair("apple", 10));

    for(auto pair : fruitCount){
        cout<<"Fruit : "<<pair.first<<","<<" Count : "<<pair.second<<endl;
    }
    return 0;
}