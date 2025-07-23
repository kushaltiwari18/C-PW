// next greater element

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

// vector<int> nextGreaterElement()

int main(){

    vector<int> arr = {6, 8, 0, 1, 3};
    stack<int> s;
    vector<int> ans(arr.size(), 0);

    for(int i=0; i<arr.size(); i++){

        while(!s.empty() && s.top() >= arr[i]){
            s.pop();
        };

        if(s.empty()){
            ans[i] = -1;
        }else{
            ans[i] = s.top();
        }

        s.push(arr[i]);
    }
    
    for(int val : arr){
        cout << val << " ";
    }cout << endl;
    for(int val : ans){
        cout << val << " ";
    }cout << endl;
    return 0;
}