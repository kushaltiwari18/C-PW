//? Given an array of integers, prints sum of all subsets in it. Output sum can be printed in any order.
/*  Input :- arr[] = {2, 3}
    Output :- 0 2 3 5
    {*} {2} {3} {2, 3}
     0   2   3   5

     Input :- arr[] = {2, 4, 5}
     Output :- 0 2 4 5 6 7 9 11
     {*} {2} {4} {5} {2, 4} {4, 5} {2, 5} {2, 4, 5}

 */

//? #Subset => {1, 2, 3}n
//  {*} {1} {2} {3} {1, 2} {1, 3} {2, 3} {1, 2, 3}
// How many total subsets exist for a set pf length n. ==> 2n
// Pick -> element can be added to the subset
// NotPick -> element cannot be added to the subset.

/*  f(arr, n, idx, sum, result) --> print sum of all subset[idx, n-1]
    f(arr, n, idx+1, sum+arr[i], result)
    f(arr, n, idx+1, sum, result)

    #Base Case :- if(idx==n) result pb(sum) return

*/

#include<iostream>
#include<vector>

void f(int *arr, int n, int i, int sum, std::vector<int> &result){
    // base case
    if(i==n){
        result.push_back(sum);
        return;
    }
    f(arr, n, i+1, sum+arr[i], result); // pick
    f(arr, n, i+1, sum, result); // not pick
}

int main(){

    int arr[] = {2, 4};
    int n = 2;
    std::vector<int> result;
    f(arr, n, 0, 0, result);
    for(int i=0; i<result.size(); i++){
        std::cout<<result[i]<<" ";
    }

    return 0;
}
