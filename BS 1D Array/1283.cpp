//1283. Find the Smallest Divisor Given a Threshold

#include<bits/stdc++.h>
using namespace std;

int checkSum(vector<int>& nums, int mid){
    int sum=0;
    for(int i=0; i<nums.size(); i++){
        sum += ceil(float(nums[i])/mid);
    }
    return sum;
}

int smallestDivisor(vector<int>& nums, int threshold) {
    int n = nums.size();
    int max = nums[0];
    for(int i=1; i<n; i++){
        if (nums[i]>max) max = nums[i];
    }
    int ans = -1;
    int i=1,j=max;
    while(i<=j){
        int mid = i + (j-i)/2;
        int x = checkSum(nums,mid);
        if (x<=threshold) 
        {
            ans = mid;    
            j=mid-1;
        }
        else i=mid+1;
    }
    return ans;
}

int main(){
    vector<int> nums = { 1,2,5,9 };
    int threshold = 6;
    cout << smallestDivisor(nums, threshold);
    return 0;
}