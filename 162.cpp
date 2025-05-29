//162. Find Peak Element

#include<bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int>& nums) {
    int i=0, j=nums.size()-1;
    if (j==0) return j;
    int ans = -1;
    if (nums[i]>nums[i+1]) ans = i; //i=0 so checking for first index;
    if (nums[j]>nums[j-1]) ans = j; //j=nums.size()-1 so checking for last index;
    i++;
    j--;
    while(i<=j){
        int mid = i + (j-i)/2;
        if ((nums[mid-1]<nums[mid]&&nums[mid]>nums[mid+1])) 
        {
            ans = mid;
            break;
        }
        if (nums[mid]<nums[mid+1]) i = mid+1;
        else j = mid - 1; //if it is not asc slope then it is desc slope so right is mid-1;
    }    
    return ans;
}

int main(){
    vector<int> nums = { 1,2,3,1 };
    cout << findPeakElement(nums);
    return 0;
}