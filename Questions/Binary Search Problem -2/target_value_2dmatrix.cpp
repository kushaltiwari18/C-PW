/* Search the target value in a 2d matrix of dimensions nxm and return 1 if found,
   else return 0. This matrix has the following properties:-
   1. Integers in each row are sorted from left to right.
   2. The first integer of each row is greater than the last integer of the previous row.
   Input:- [ [1, 3, 5, 7], [10, 11, 16, 20], [23, 30, 34,60]]
   Target:- 3
   Output:- 1
*/

#include<iostream>
#include<vector>
using namespace std;

bool searchMatrix(vector<vector<int>> &a, int target){
    int n = a.size();
    int m = a[0].size();

    int low = 0;
    int high = n*m - 1;
    while(low<=high){
        int mid = low + (high - low)/2;
        int x = mid/m;
        int y = mid%m;
        if(a[x][y] == target){
            return true;
        }else if(a[x][y] < target){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return false;
}

int main(){

    vector<vector<int>> a = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target = 60;
    cout<<searchMatrix(a, target)<<endl;
    // cout<<a.size()<<endl; // number of row
    // cout<<a[0].size()<<endl; // number of column

    return 0;
}