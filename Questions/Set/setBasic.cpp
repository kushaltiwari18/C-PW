// What is set?

// ? Set is a collection of unique elements. It is used to store elements.
// ? It is a part of C++ STL (Standard Template Library).
// ? It is implemented using Red-Black Tree.
// ? It is an associative container.
// ? It is used to store elements in sorted order.
// ? It is used to perform operations like searching, insertion, deletion in O(log n) time complexity.
// No indexing is supported in set.
// values are stored in sorted order.
// set is implemented using balanced binary search tree.

// Disadvantages of set:

// Cannot access elements using index.
// Cannot change the value of elements. 
// not suitable for large data.


#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(30);
    s.insert(10);
    s.insert(50);
    s.insert(20);

    // size of set
    cout<<"Size -> "<<s.size()<<endl;

    // max size of set
    cout<<"Max Size -> "<<s.max_size()<<endl;

    // check if set is empty
    cout<<s.empty()<<endl;

    // finding elements
    if(s.find(10) != s.end()){
        cout<<"element found"<<endl;
    }else{
        cout<<"element not found"<<endl;
    }

    // count of elements if present 1 else 0
    cout<<"count -> "<<s.count(10)<<endl;

    // lower bound and upper bound
    cout<<"lower bound -> "<<*s.lower_bound(5)<<endl;
    cout<<"upper bound -> "<<*s.upper_bound(30)<<endl;

    // deleting elements
    s.erase(10);
    cout<<"size ->"<<s.size()<<endl; 
    
    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    cout<<"size ->"<<s.size()<<endl;

    // define the range to delete
    auto start_itr = s.begin();
    auto end_itr = s.end();
    
    s.erase(start_itr, end_itr);
    cout<<"size ->"<<s.size()<<endl;

    cout<<s.empty()<<endl;

    // traversing the set
    // set<int>::iterator it;
    // for (it = s.begin(); it != s.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    // cout << endl;

    // another way to traverse the set
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;


    return 0;
}