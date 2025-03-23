// Implement hash table using closed addressing(separate chaining).

#include <iostream>
#include <list>
#include <vector>
using namespace std;

class Hashing
{

    vector<list<int> > hashtable;
    int buckets;

public:
    Hashing(int size)
    {
        buckets = size;
        hashtable.resize(buckets);
    }

    int hashValue(int key)
    {
        return key % buckets;
    }

    void addKey(int key)
    {
        int index = hashValue(key);
        hashtable[index].push_back(key);
    }

    list<int>::iterator searchKey(int key)
    {
        int index = hashValue(key);
        return find(hashtable[index].begin(), hashtable[index].end(), key);
    }


    void deleteKey(int key)
    {
        int index = hashValue(key);
        if (searchKey(key) != hashtable[index].end())
        {
            // key is present
            hashtable[index].erase(searchKey(key));
            cout << "Key Deleted" << endl;
        }
    }
};

int main()
{

    Hashing h(10);
    h.addKey(5);
    h.addKey(9);
    h.addKey(6);

    h.deleteKey(6);
    h.deleteKey(6);

    
    

    return 0;
}