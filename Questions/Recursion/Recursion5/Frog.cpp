//? Find the minimum possible total cost incurred befor efrog eaches stone N.

/*  There are N stones, numbered 1, 2,...N. For each  (1<=i<=N), the height of stone i is hi.
    There is a frog who is initially on stone 1. He will repeat the following action some number
    of times to reach stone N

    If the frog is currently on stone i, jump to stone i+1 or stone i+2, Here a cost of | hi - hj |
    is incurred, where j is the stone to land on.

    Input :- n = 4
    arr[] = 10 30 40 20
    Output :- 30

    h --> 10 30 40 20
    i --> 1  2  3  4  

    1->2->3->4  = 20+10+20 = 50
    1->3->4     = 30+20 = 50
    1->2->4     = 20+10 = 30
    | h1 - h2 | + x  or | h1 - h3 | + y

    f(h, n, i) = min{ f(h, n, i+1) + | hi - hi+1 | , f(h, n, i+2) + | hi - hi+2 |}
*/

#include<iostream>

int f(int *h, int n, int i){
    // base case
    if(i==n-1) return 0;
    if(i==n-2) return f(h, n, i+1) + abs(h[i] - h[i+1]);

    return std::min(f(h, n, i+1) + abs(h[i] - h[i+1]), f(h, n, i+2) + abs(h[i] - h[i+2]));
}

int main(){

    int arr[] = {10, 30, 40, 20, 50};
    int n = 5;
    std::cout<<f(arr, n, 0)<<"\n";

    return 0;
}