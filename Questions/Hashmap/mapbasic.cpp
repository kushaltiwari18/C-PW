// Map in c++ STL
// -STL container which store elements in key value pair
// -The elements are stored in a specific order ascending order by default
// -Maps cannot have duplicate keys
// -Implemented trhough balanced binary search tree
// -Time complexity of all operations is O(logn)

#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;
    m[1] = "abc";
    m[5] = "cdc";
    m[3] = "efg";
    m[2] = "hij";

    // m.insert({4, "klm"});
    m.insert(make_pair(6, "nop"));

    // no change if present
    m.insert(make_pair(6, "qrs"));

    // update value
    m[6] = "pqr";

    // swap values of 1 and 2
    swap(m[1], m[2]);

    // is empty
    cout << m.empty() << endl;

    // size
    cout << "Size : "<<m.size() << endl;

    // max size
    // cout << "Space allocated in memory :"<<m.max_size() << endl;

    // erase
    m.erase(3);
    map<int, string>::iterator it1 = m.begin();
    it1++;

    auto it2 = m.end();
    it2--;
    m.erase(it1, it2);

    // find
    cout<<m.find(1)->second<<endl;
    cout<<m.find(1)->first<<endl;
    
    auto key = 6;
    if(m.find(key) != m.end()){
        cout<<"Key found : "<<m.find(key)->first<<endl;
    }else{
        cout<<"Key not found : nothing"<<endl;
    }

    // count
    cout<<"Count : "<<m.count(1)<<endl;

    // upper bound and lower bound
    cout<<"Upper bound : "<<m.upper_bound(2)->first<<endl;
    cout<<"Lower bound : "<<m.lower_bound(2)->first<<endl;

    // clear
    // m.clear();

    map<int, string>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}