/* Search element in rotated sorted array with duplicate elements. Return 1 if element is foound else return -1
   i/p: [0, 0, 0, 1, 1, 1, 2, 0, 0, 0] 
*/

#include<iostream>
#include<vector>
using namespace std;

int searchInRotatedArray(vector<int> &input,int target){

    int left = 0, right = input.size()-1;
    while(left<=right){
        int mid = left + (right-left)/2;
        if(input[mid]==target) return 1;
        if(input[left]==input[mid] && input[right]==input[mid]){
            // Handle the case where elements at both ends and mid are equal
            ++left;
            --right;
        }else if(input[left]<=input[mid]){
            if(input[left]<=target && target<input[mid]){
                // left half is sorted
                right = mid -1;
            }else{
                left = mid +1;
            }
        }else{ // right half is sorted
            if(input[mid]<target && target<=input[right]){
                left = mid +1;
            }else{
                right = mid -1;
            }
        }
    }
    return -1; //. element not found

    

}
int main(){

    vector<int> rotatedArray = {4, 5, 6, 7, 0, 1, 2, 4};
    int target = 6;
    int result = searchInRotatedArray(rotatedArray, target);
    if(result==1){
        cout<<"Element Found!"<<"\n";
    }else{
        cout<<"Element not found!"<<"\n";
    }
    return 0;
}