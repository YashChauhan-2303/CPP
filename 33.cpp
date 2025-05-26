//33. Search in Rotated Sorted Array

#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
    int i = 0 ;
    int k = 0 ;
    int j = nums.size()-1;
    int sort = 0;
    while(k<nums.size()-1 && nums[k]<nums[k+1]){
        k++;
        sort++;
    }
    if(nums[i]<=target){
        while(i<=sort){
            int mid = i + (sort-i)/2;
            if(nums[mid]==target){
                return mid;
            } else if (nums[mid]<target){
                i = mid+1;
            } else {
                sort = mid-1;
            }
        }
        return -1;
    } else {
        sort++;
        while(sort<=j){
            int mid = sort + (j-sort)/2;
            if(nums[mid]==target){
                return mid;
            } else if (nums[mid]<target){
                sort = mid+1;
            } else {
                j = mid-1;
            }
        }
        return -1;
    }
    return -1;
}

int main(){
    vector<int> nums = { 3,1 };
    int target = 3;
    cout << search(nums,target);
    return 0;
}