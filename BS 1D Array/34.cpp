//34. Find First and Last Position of Element in Sorted Array

#include<bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
    int left=0;
    int right=nums.size()-1;
    int first = -1;
    int last = -1;
    vector<int> ans;
    while(left<=right){
        int mid = left + (right-left)/2;
        if(nums[mid]==target){
            first = mid;
            right = mid-1;
        } else if (nums[mid] < target){
            left=mid+1;
        } else {
            right=mid-1;
        }
    }
    ans.push_back(first);
    left=0;
    right = nums.size()-1;
    while(left<=right){
        int mid = left + (right-left)/2;
        if(nums[mid]==target){
            last = mid;
            left = mid+1;
        } else if (nums[mid] < target){
            left=mid+1;
        } else {
            right=mid-1;
        }
    }
    ans.push_back(last);
    return ans;
}

int main(){
    vector<int> nums = { 5,7,7,8,8,10 };
    int target = 8;
    vector<int> ans = searchRange(nums,target);
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}