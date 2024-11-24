/* A new racing track for kids is being built in New York with 'n'  starting spots. The spots are
located along a straight line at position x1, x2 .......xn( xi <=10^9). For each 'i', xi+1 > x1.
At a time only m chlidren are allowed to enter the race. Since the race track is for kids, they may
run into each other while running. To prevent this, we wan't to choose the starting spot such that 
the minimum distance between  any two of them is as large as possible. What is the largest minimum 
distance?
-->The first line of input will contain the value of n, the number of starting spots.
--> The second line of input will contain the n number denoting the location of each spot.
--> The third line will contain the value of m, number of children.

Input: 5
spots: 1 2 4 8 9
Output: 3
*/

#include<iostream>
#include<vector>
using namespace std;

bool canPlaceStud(vector<int> &pos, int s, int mid){
    int student = 1;
    int lastPlaced = pos[0];
    for(int i=1; i<pos.size(); i++){
        if(pos[i]-lastPlaced >= mid){
            student++;
            lastPlaced=pos[i];
            if(student==s){
                return true;
            }
        }
    }
    return false;
}

int race(vector<int> &pos, int s){
    int n = pos.size()-1;
    int low = pos[0];
    int high = pos[n] - pos[0];
    int ans = -1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(canPlaceStud(pos, s, mid)){
            ans = mid;
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return ans;
}

int main(){

    int n;
    cin>>n;
    vector<int> pos;
    while(n--){
        int x;
        cin>>x;
        pos.push_back(x);
    }
    int s;
    cin>>s;
    cout<<race(pos, s)<<endl;

    return 0;
}