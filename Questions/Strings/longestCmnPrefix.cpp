// Given an array of strings. Write a program to find the longest common prefix string
// amongst an array of strings.
// Input: arr = ["flower", "flight", "flask"]
// Output: "fl"

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> &str){
    // sorting the array of string
    sort(str.begin(), str.end());

    string s1 = str[0]; // first string
    int i = 0, j=0;
    string s2 = str[str.size()-1]; // last string
    string ans = "";

    while(i<s1.size() && j<s2.size()){
        if(s1[i] == s2[j]){
            ans += s1[i];
            i++; 
            j++;
        }else{
            break;
        }
    }
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