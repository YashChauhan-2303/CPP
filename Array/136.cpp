//136. Single Number

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

// int singleNumber(vector<int>& nums) {
//     int n = nums.size();
//     mergesort(nums,0,n-1);
//     int j=1;
//     int k=nums[0];
//     for (int i=1;i<n;i++){
//         if(nums[i]==k){
//             j++;
//         }
//         else if (nums[i]!=k || i==n-1){
//             if(j!=2){
//                 return k;
//             }
//             j=1;
//             k=nums[i];
//         }
//     }
//     return nums[n-1];
// }

int singleNumber(vector<int>& nums) {
    int n=0;
    for(int i=0; i<nums.size();i++){
        n ^= nums[i];
    }
    return n;
}

int main(){
    vector<int> nums = { 1 };
    cout << singleNumber(nums);
    return 0;
}