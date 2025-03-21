/* unordered_set :- 
   - values are stored in unordered manner.
   - values are stored in hash table.
   - unique values are stored.
   - values cannot be modified.
   - Time complexity of insert, delete, search is O(1).
   - unordered_set is faster than set.
*/

#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
    unordered_set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);
    s.insert(5);
    

    for(auto i = s.begin(); i != s.end(); i++)
    {
        cout<<*i<<" ";
    }
    return 0;
}