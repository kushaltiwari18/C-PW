// nums1 = [4,1,2], nums2 = [1,3,4,2].
// nums2 find next greater element
// num1 search in nums2 by use an unordered map


#include<iostream>
#include<stack>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2){
    stack<int> s;
    unordered_map<int, int> m; // nums2 NG element

    for(int i=nums2.size()-1; i>=0; i--){
        while(s.size() && s.top() <= nums2[i]){
            s.pop();
        }

        if(s.empty()){
            m[nums2[i]] = -1;
        }else{
            m[nums2[i]] = s.top();
        }

        s.push(nums2[i]);
    }

    vector<int> ans;
    for(int val : nums1){
        ans.push_back(m[val]);
    }

    return ans;


}

int main()
{
    vector<int> nums1 = {4,1,2};
    vector<int> nums2 = {1,3,4,2};
    vector<int> ans = nextGreaterElement(nums1, nums2);
    for(int val : ans){
        cout << val << " ";
    }cout << endl;
    return 0;
}