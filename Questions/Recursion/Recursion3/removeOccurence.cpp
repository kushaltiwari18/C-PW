// ? Remove all the occurnrce of 'a' from string s='abcax'

// Itrative :-
// result = " ";
/* for(i=0; i<n; i++){
    if(s[i]! = 'a'){
        result += s[i];
       }
   }
*/

// ! f(s, idx, n) = (s[idx] == 'a') ? " " : s[idx] + f(s, idx+1, n)
// This function returns a string in which there is number of occurence of 'a' from s, starting from index idx.

/*
  # Base Case :- if there is no char  left in the string return empty string.

  # Assumption :- Assume function correctly work for f(s, idx+1, n) means, function will any how return a string
                  any 'a' from the remaining char of s drom index (idx+1)
  
  # Self Work :- if my current char is not 'a', then append current char with answere of f(s, idx+1, n) else don't
                 append anything.
*/

#include<iostream>
using namespace std;

string f(string &s, int idx, int n){
    if(idx==n) return "";
    string curr = "";
    curr += s[idx];
    return ((s[idx]=='a') ? "" : curr) + f(s, idx+1, n);
}

int main(){

    string s = "abcax";
    int n =5;
    cout<<s<<"\n";
    cout<<f(s, 0, n)<<"\n";

    return 0;
}