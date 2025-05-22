//53. Maximum Subarray

#include<bits/stdc++.h>
#include <climits>
using namespace std;

//brute-force
// int maxSubArray(vector<int>& nums) {
//     int n = nums.size();
//     int sum;
//     int max = INT_MIN;
//     for(int i=0;i<n;i++){
//         sum=0;
//         for(int j=i; j<n ;j++){
//             sum+=nums[j];
//             if(sum > max) {
//                 max = sum;
//             }
//         }
//     }
//     return max;
// }

//kadane's-algorithm
int maxSubArray(vector<int>& nums) {
    int n = nums.size();
    int sum=nums[0];
    int max = nums[0];
    for(int i=1; i<n; i++){
        if (sum + nums[i] > nums[i]){
            sum+=nums[i];
        } else {
            sum=nums[i];
        }
        if(sum > max){
            max = sum;
        }
    }
    return max;
}

int main(){
    vector<int> nums = { 1 };
    cout << maxSubArray(nums);
    return 0;
}