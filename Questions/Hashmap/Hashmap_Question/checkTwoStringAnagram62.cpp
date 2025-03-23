/* Check wheather two strings are anagram of each other. Return true if they are anagram otherwise return false.
-- An Anagram of a string is another string that contains same characters, only the order of characters can be different.
Input: s1 = "listen", s2 = "silent"
Output: Yes

*/

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

bool checkAnagram(string s1, string s2){

    if(s1.length() != s2.length()){
        return false;
    }

    unordered_map<char, int> m;
    for(auto c1:s1){
        m[c1] = m[c1] + 1;
    }

    for(auto c2:s2){
        if(m.find(c2) == m.end()){
            return false;
        }
        else{
            m[c2] = m[c2] - 1;
        }
    }

    for(auto element : m){
        if(element.second != 0){
            return false;
        }
    }

    return true;
}

int main()
{
    string s1, s2;
    cin>>s1>>s2;

    cout<<(checkAnagram(s1,s2) ? "Yes" : "No")<<endl;
    return 0;
}