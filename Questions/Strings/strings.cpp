// ! What is String?
/* String are used to sequence of character. String are object of class in C++.
   Syntax:- string string_name = "abcd"
   Class are user defined datatype, where we can define property and functions
   same like in c++ string class is defined.
*/

#include<iostream>
#include<string>
#include<algorithm> // for reverse()
#include<cstring> // for char
using namespace std;

int main (){

    // * Two ways to define string

    string str = "kushal";
    string str1("Tiwari");
    // cout<<str<<" "<<str1<<endl;

    // ? Input for string

    // string str2;
    // cin>>str2; // only works for single word
    // cout<<str2<<endl;

    // ?  works for multiple line
    // string str3;
    // getline(cin, str3); 
    // cout<<str3<<endl;

    // ? indexing of character in a string

    // for(int i=0; i<str.size(); i++){
    //     cout<<str[i]<<endl;
    // }

    // cout<<str[7]<<endl; 
    // its the null character shows it is end of our string

    // ? ASCII values

    char ch = 'k';
    // cout<<int(ch)<<endl;
    // for(int i=0; i<str.length(); i++){
    //     int check = str[i] - 'a';
    //     cout<<check<<endl;
    // }
    

    // ? reverse string
    // reverse(str.begin(), str.end());
    // cout<<str<<endl;

    // ? substr()
    cout<<str.substr(0,1)<<endl;

    // ? The "+" operator (concatenating string)
    string s1 = "happy";
    string s2 = "holi";
    // string s3 = s1 += s2;
    // s1 += s2;   // s2 is getting appended after s1
    // s1 = s1 + s2;  // copy string created for s1, extra space for creating copy of string
    // cout<<s1<<endl;

    // ? strcat()
    // char c1[20] = "john";
    // char c2[20] = "wick";
    // cout<<strcat(c1,c2)<<endl;

    // ? push_back()
    // char alpha = 'S';
    // str.push_back(alpha);
    // cout<<str<<endl;

    // ? size()  ----> O(1)
    // cout<<str.size()<<endl;
    // cout<<str.length()<<endl;

    // ? to_string()  --> to convert numeric/integer value to string.
    // int num = 432;
    // string st = to_string(num);
    // st += "1";
    // cout<<st<<endl;
    // int num1 = 4;
    // string st1 = to_string(num1);
    // st1 += "5";
    // cout<<st1<<endl;
    
    



    return 0;
}