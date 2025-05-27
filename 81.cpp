//81. Search in Rotated Sorted Array II

#include<bits/stdc++.h>
using namespace std;

bool search(vector<int>& nums, int target) {
    int i=0;
    int j=nums.size()-1;
    while(i<=j){
        int mid = i + (j-i)/2;
        if (nums[mid] == target) return true;
        if (nums[i] == nums[mid] && nums[mid] == nums[j]) {
            i++;
            j--;
            continue;
        }
        if(nums[mid] >= nums[i]){
            if (nums[i] <= target && nums[mid]>target){
                j = mid-1;
            } else {
                i = mid+1;
            }
        } else {
            if (nums[mid]<target && target <= nums[j]){
                i=mid+1;
            } else {
                j = mid-1;
            }
        }
    }
    return false;
}

int main(){
    vector<int> nums = { 1,1,1,1,1,1,1,1,1,13,1,1,1,1,1,1,1,1,1,1,1,1 };
    int target = 13;
    cout << search(nums,target);
    return 0;
}