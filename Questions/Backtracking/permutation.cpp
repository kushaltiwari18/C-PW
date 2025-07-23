#include<iostream>
#include<string>
using namespace std;

void permutation(string &str, int i){
    // base case
    if(i == str.size()){
        cout<<str<<"\n";
    }
    for(int j =i; j<str.size(); j++){
        swap(str[i], str[j]);
        permutation(str, i+1);
        swap(str[i], str[j]);
    }
}

int main()
{
    string str = "abc";
    permutation(str, 0);
    cout<<str.size()<<endl;
    return 0;
}