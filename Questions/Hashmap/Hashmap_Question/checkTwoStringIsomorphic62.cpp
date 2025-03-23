/* Check Wheather two strings are isomorphic to each other. Return true if they are isomorphic otherwise return false.
-- Two strings are isomorphic of each other if there is one-to-one mapping possible for every character of first string to every character of second string while preserving the order.
Input: s1 = "aab", s2 = "xxy"
Output: Yes
Input: s1 = "abcdec", s2 = "viouog"
Output: No

*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool checkIsomorphic(string s1, string s2)
{

    if (s1.length() != s2.length())
    {
        return false;
    }

    unordered_map<char, char> m;

    // checking one to many mapping from s1->s2
    for (int i = 0; i < s1.length(); i++)
    {
        if (m.find(s1[i]) != m.end())
        {
            if (m[s1[i]] != s2[i])
            {
                return false;
            }
        }
        else
        {
            m[s1[i]] = s2[i];
        }
    }

    m.clear();
    // checking one to many mapping from s2->s1
    for (int i = 0; i < s2.length(); i++)
    {
        if (m.find(s2[i]) != m.end())
        {
            if (m[s2[i]] != s1[i])
            {
                return false;
            }
        }
        else
        {
            m[s2[i]] = s1[i];
        }
    }

    return true;
}

int main()
{

    string s1, s2;
    cin >> s1 >> s2;

    cout << (checkIsomorphic(s1, s2) ? "Yes" : "No") << endl;
    return 0;
}