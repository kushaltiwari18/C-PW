// The problem is to count all the possible path on an mxn grid from top left (grid[0][0]) to bottom right to (grid[m-1][n-1]). 
#include<iostream>

int f(int i, int j, int m, int n){
    //base case
    if(i == m-1 and j == n-1) return 1;
    if(i >= m or j >=n ) return 0;

    return f(i, j+1, m, n) + f(i+1, j, m, n);
}

int main(){

    std::cout<<f(0, 0, 2, 3);
    return 0;
}