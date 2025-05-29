//35. Search Insert Position

#include<bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int left=0;
    int right=nums.size()-1;
    int ans = -1;
    while(left<=right){
        int mid = (left+right)/2;
        if(nums[mid]<target){
            ans = left+1;
            left=mid+1;
        } else if (nums[mid] > target){
            ans = mid;
            right = mid-1;
        } else {
            ans = mid;
            break;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = { 1,3 };
    int target = 0;
    cout << searchInsert(nums,target);
    return 0;
}