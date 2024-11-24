/* Given a binary string and a  integer k, return the maximum number of consecutive 1's
in the string if you can flip at most k 0's.
Input: "0001101011"
Output: 7
? Sliding window technique: To find longest/shortest sequence with some given condition
*/

#include<iostream>
#include<string>
using namespace std;

int longestOnes(string str, int k){
    int start = 0;
    int end = 0;
    int zero_count = 0;
    int max_length = 0;

    for( ; end<str.length(); end++){
        if(str[end] == '0'){
            zero_count++;
        }
        while(zero_count>k){
            if(str[start] == '0'){
                zero_count--;
                // contracting our window
                start++;
            }
        }
        max_length = max(max_length, end-start+1);
    }
    return max_length;
}

int main(){

    string str;
    cout<<"Enter binary string: ";
    cin>>str;
    int k;
    cout<<"Enter max flips: ";
    cin>>k;
    cout<<longestOnes(str, k)<<endl;

    return 0;
}