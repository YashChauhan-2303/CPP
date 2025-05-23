//1827. Minimum Operations to Make the Array Increasing

#include<bits/stdc++.h>
using namespace std;

int minOperations(vector<int>& nums) {
    int n = nums.size();
    int j=1;
    int count = 0;
    while(j<n){
        if (nums[j-1]>=nums[j]){
            count += nums[j-1]-nums[j]+1;
            nums[j] += nums[j-1]-nums[j]+1;
        }
        if (nums[j]>nums[j-1]){
            j++;
        }
    }
    return count;
}

int main(){
    vector<int> nums = { 1,5,2,4,1 };
    cout << minOperations(nums);
    return 0;
}