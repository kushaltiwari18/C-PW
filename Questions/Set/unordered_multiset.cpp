/* unordered_multiset :-
   - values are stored in unordered manner.
   - values are stored in hash table.
   - allows duplicate values.
   - values cannot be modified.
   - Time complexity of insert, delete, search is O(1).
   - unordered_multiset is faster than multiset.

*/

#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_multiset<int> ums;
    ums.insert(10);
    ums.insert(35);
    ums.insert(15);
    ums.insert(20);
    ums.insert(65);
    ums.insert(25);
    ums.insert(50);

    for (auto i = ums.begin(); i != ums.end(); i++)
    {
        cout << *i << " ";
    }
    return 0;
}
