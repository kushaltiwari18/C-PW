// Given an array of strings. Write a program to find the longest common prefix string
// amongst an array of strings.
// Input: arr = ["flower", "flight", "flask"]
// Output: "fl"

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

string longestCommonPrefix(vector<string> &str){
  // keeping first string as constant and comparing it with all other strings
  string s1 = str[0];
  int ans_length = s1.size();

  for(int i=1; i<str.size(); i++){
    int j= 0;
     // finding the common prefix length
    while(j<s1.size() && j<str[i].size() && s1[j] == str[i][j]){
        j++;
    }
    // updating length of ans string
     ans_length = min(ans_length, j);
  }
  string ans = s1.substr(0, ans_length);
  return ans;
}

int main(){

    int n;
    cout<<"Enter no. of strings: ";
    cin>>n;
    
    cout<<"Enter Strings: ";
    vector<string> str(n);
    for(int i=0; i<n; i++){
        cin>>str[i];
    }
    cout<<"longest common prefix: "<<longestCommonPrefix(str)<<endl;

    return 0;
}