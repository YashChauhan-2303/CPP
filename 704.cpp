//704. Binary Search

#include<bits/stdc++.h>
using namespace std;

//iterative
// int search(vector<int>& nums, int target) {
//     int left=0;
//     int right=nums.size()-1;
//     while(left<=right){
//         int mid = (left+right)/2;
//         if(nums[mid]<target){
//             left=mid+1;
//         } else if (nums[mid] > target){
//             right = mid-1;
//         } else {
//             return mid;
//         }
//     }
//     return -1;
// }

//recursive
int search(vector<int>& nums, int target, int left, int right) {
    if (left>right) return -1;
    int mid = (left+right)/2;
    if(nums[mid]<target){
        left=mid+1;
    } else if (nums[mid] > target){
        right = mid-1;
    } else {
        return mid;
    }
    return search(nums,target,left,right);
}

int main(){
    vector<int> nums = { -1,0,3,5,9,12 };
    int target = 9;
    cout << search(nums,target,0,nums.size()-1);
    return 0;
}