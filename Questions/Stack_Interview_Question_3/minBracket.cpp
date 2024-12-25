// Find the minimum of brackets that we need to remove to make the given bracket sequence balanced

#include<iostream>
#include<stack>
#include<string>
using namespace std;

int minBracket(string &s){

    stack<char> st;
    int n = s.size();
    int count = 0;
    for(int i =0; i<n; i++){
        if(s[i] == '('){ 
            st.push('(');
        }else if(s[i] == ')'){
            if(!st.empty()){ // / Balanced pair found, pop the opening bracket
                st.pop();
            }else{
                count++; // // Unbalanced closing bracket
            }
        }
    }
    count += st.size();
    return count;

}

int main(){

    string s = ")((   ())";
    cout<<minBracket(s)<<endl;

    return 0;
}