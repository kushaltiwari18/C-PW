/* An encoding string(s) is given, and the task is to decode it. The encoding pattern 
    is that the occurennceof the string is given at the starting of the string and each
    string is enclosed by square bracket.
    Note: The occurence of the string is less tahn 1000.
    Input: S = 1[b]  Output: b
    Input: S = 1[a2[b3[c]]]  Output : "abcccbcc"
    Input: S = 3[b2[ca]] Output : ""
    ==>3[bcaca] ==> bcacabcacabcaca

*/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string decodeString(string s){ 
    string result = "";
    // traversing the encoded string
    for(int i=0; i<s.length(); i++){
        if(s[i] != ']'){
            result.push_back(s[i]);
        }else{
            //extract str from  result
            string str = "";
            while(!result.empty() && result.back() != '['){
                str.push_back(result.back());
                result.pop_back();
            }

            // reversing the str
            reverse(str.begin(),str.end());

            // remove last char from result which is [
            result.pop_back();

            // extract num from result
            string num = "";
            while(!result.empty() && (result.back() >= '0' && result.back() <='9')){
                num.push_back(result.back());
                result.pop_back();
            }

            // reverse the num string
            reverse(num.begin(),num.end());

            // convert string to number
            int int_num = stoi(num);

            // inserting str in result int_num times
            while(int_num){
                result += str;
                int_num--;
            }
        }
    }
    return result;
}

int main(){

    string str;
    cout<<"Enter encoded string: ";
    cin>>str;
    cout<<decodeString(str)<<endl;

    return 0;
}