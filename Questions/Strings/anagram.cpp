/* Given two strings s and t, return true if t is an anagram of s, and false otherwise.
   Input: "anagram" Output:"nagaram" Yes
   Input: "bank" Output:"atm" No

   * Anagram:-
   1) Rearranging letter of word to get another word.
   2) Same letter
   3) same count of letter

*/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool isAnagram(string s1, string s2){
    // create frequency array
    vector<int> freq(26, 0);

    // if length are different for s1, s2 then return false
    if(s1.length() != s2.length()) return false;

    // store frequency of character in s1, s2.
    for(int i=0; i<s1.length(); i++){
        freq[s1[i]-'a']++; // for s1 we are incrementing 
        freq[s2[i]-'a']--; // for s2 we are decrementing
    }

    // checking if frequency of every character is 0
    for(int i=0; i<26; i++){
        if(freq[i] != 0) return false;
    }

    return true;
    
}

int main(){

    string s1;
    cin>>s1;
    string s2;
    cin>>s2;

    if(isAnagram(s1, s2)){
        cout<<"String are Anagram"<<endl;
    }else{
        cout<<"String are not Anagram"<<endl;
    }

    return 0;
}