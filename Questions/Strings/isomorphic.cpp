// ? Given two strings s and t, determine if they are isomorphic.
// Input: s = "egg" , t = "add"  YES
// Input: s = "egg" , t = "ada"  NO
// Isomorphic means one to one mapping between character

#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool isIsomorphic(string s1, string s2){

    vector<int> v1(128, -1);
    vector<int> v2(128, -1);

    if(s1.size() != s2.size()) return false; // if string doesnot match

    for(int i=0; i<s1.size(); i++){
        if(v1[s1[i]] != v2[s2[i]]) return false;
        v1[s1[i]] = v2[s2[i]] = i;
    }
    return true;
}

int main(){

    string s1, s2;
    cin>>s1>>s2;

    if(isIsomorphic(s1, s2)){
        cout<<"They are Isomprphic"<<endl;
    }else{
        cout<<"They are not Isomprphic"<<endl;
    }

    return 0;
}