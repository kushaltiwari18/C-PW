// ? Pattern : Binary Search on answere value
/*
You have 'n' (n<=10^5) boxes of chocolate. Each bnox contains a[i] (a[i] <= 10000) chocolates.
You need to distribute these boxes among 'm' students such that the maximum number of chocolates
allocated to a student is minimun.
a> One box will be allocated to exactly one student.
b> All the boxes should be allocated.
c> Each student has to be allocated at least one box.
d> Allotment should be in contiguous order, for instance a student cannot be allocated box1 and box3,
   skipping box2.
   Calculate and return that minimum possible number.
   --> The first line of input will contain the value of n, the number of boxes.
   --> The second line of input will contain n mumber denoting the number of chocolates in each box.
   --> The third line will contain the m, number of stundents.
*/

#include<iostream>
#include<vector>
using namespace std;

bool canDistChoco(vector<int> &arr, int mid, int s){
    int n = arr.size();
    int studentReq = 1;
    int curr_sum = 0;
    for(int i=0; i<n; i++){
        if(arr[i]>mid){
            return false;
        }
        if(curr_sum + arr[i] > mid){
            studentReq++;
            curr_sum = arr[i];
            if(studentReq > s) return false;
        }else{
            curr_sum += arr[i];
        }
    }
    return true;
}

int distributeChocolates(vector<int> &arr, int s){
    int n = arr.size();
    int low = arr[0];
    int high = 0;
    for(int i=0; i<n; i++){
        high += arr[i];
    }
    int ans = -1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(canDistChoco(arr, mid, s)){
            ans = mid;
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return ans;
}

int main(){

    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int s;
    cin>>s;
    cout<<distributeChocolates(v, s)<<endl;

    return 0;
}


