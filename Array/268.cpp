//268. Missing Number

#include<bits/stdc++.h>
using namespace std;

// void merge(vector<int>& nums, int l, int mid, int r){
//     vector<int> arr;
//     int i=l,j=mid+1;
//     while(i<=mid and j<=r){
//         if(nums[i]<=nums[j]){
//             arr.push_back(nums[i]);
//             i++;
//         }
//         if(nums[i]>nums[j]){
//             arr.push_back(nums[j]);
//             j++;
//         }
//     }
//     while(i<=mid){
//         arr.push_back(nums[i]);
//         i++;
//     }
//     while(j<=r){
//         arr.push_back(nums[j]);
//         j++;
//     }
//     for (int k = 0; k < arr.size(); ++k) {
//         nums[l + k] = arr[k];
//     }
// }

// void mergesort(vector<int>& nums,int l,int r){
//     if (l >= r) return;
//     int mid = (l+r)/2;
//     mergesort(nums,l,mid);
//     mergesort(nums,mid+1,r);
//     return merge(nums,l,mid,r);;
// }

// int missingNumber(vector<int>& nums) {
//     int n = nums.size();
//     mergesort(nums,0,n-1);
//     for(int i=0;i<n;i++){
//         if(nums[i]!=i){
//             return i;
//         }
//     }
//     return n;

// }

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int sum1 = (n*(n+1))/2;
    int sum2 = 0 ;
    for(int i = 0; i<n ; i++){
        sum2 += nums[i];
    } 
    if (sum1 != sum2){
        return sum1-sum2;
    }
    return n;
}

int main(){
    vector<int> nums = {3,0,1};
    cout << missingNumber(nums);
    return 0;
}