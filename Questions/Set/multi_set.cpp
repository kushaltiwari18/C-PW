/* multi_set :- 
   - values are stored in sorted manner.
   - values are stored in binary search tree.
   - multiple values are stored.
   - values can be modified.
   - Time complexity of insert, delete, search is O(logn).
   - values cannot be modified.
*/

#include<iostream>
#include<set>
using namespace std;

int main()
{
    multiset<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);
    s.insert(5);

    cout<<"Lower Bound : "<<*s.lower_bound(3)<<endl;
    cout<<"Upper Bound : "<<*s.upper_bound(15)<<endl;

    for(auto i = s.begin(); i != s.end(); i++)
    {
        cout<<*i<<" ";
    }
    return 0;
}