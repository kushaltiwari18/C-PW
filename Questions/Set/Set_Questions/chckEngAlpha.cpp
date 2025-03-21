#include<iostream>
#include<set>
#include<string>
using namespace std;

bool checkAllAlphabets(string s){

    if(s.length() < 26){
        return false;
    }

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    set<char> alphabets;
    for(auto c: s){
        alphabets.insert(c);
    }
    return alphabets.size() == 26;
}

int main()
{
    string input;
    cout<<"Enter a string : ";
    cin>>input;
    if(checkAllAlphabets(input))
        cout<<"All characters are alphabets."<<endl;
    else
        cout<<"All characters are not alphabets."<<endl;
    return 0;
}