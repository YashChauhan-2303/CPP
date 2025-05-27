//540. Single Element in a Sorted Array

#include<bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int>& nums) {
    int n = nums.size();
    if (n==1) return nums[0];
    if(nums[0]!= nums[1]) return nums[0];
    if(nums[n-1]!= nums[n-2]) return nums[n-1];
    int low=1,high=n-2;
    while(low<=high){
        int mid = low + (high-low)/2;
        if (nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1]) return nums[mid];
        if((mid%2==0 && nums[mid+1]==nums[mid]) || (mid%2==1 && nums[mid-1]==nums[mid])) low=mid+1;
        else high = mid-1;
    }
    return nums[low];
}

int main(){
    vector<int> nums = { 3,3,7,7,10,11,11 };
    cout << singleNonDuplicate(nums);
    return 0;
}