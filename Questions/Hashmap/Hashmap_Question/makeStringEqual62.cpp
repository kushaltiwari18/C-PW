/* Can you make the strings equal?
Given an array of string, You can move any number of characters from one string to any another string any number of time. you just have to make all of the strings equal. Print "Yes" if you can make every string in the array qual by using any number of operations otherwise print "No".

Input: ["abc","aabc","bc"]
Output: Yes

Input: ["wall:","ah","wallahah"]
Output: No
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool canMakeEqual(vector<string> &v)
{
    unordered_map<char, int> m;
    for (auto str : v)
    {
        for (auto c : str)
        {
            m[c] = m[c] + 1;
        }
    }

    int n = v.size();
    for (auto element : m)
    {
        if (element.second % n != 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{

    int n;
    cin >> n;

    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    cout << (canMakeEqual(v) ? "Yes" : "No") << endl;

    //     3
    // collegeee
    // coll
    // collegge
    // Yes

    return 0;
}