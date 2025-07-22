//1423. Maximum Points You Can Obtain from Cards

// class Solution {
// public:
//     int maxScore(vector<int>& nums, int k) {
//         int n = nums.size();
//         int lSum = 0, rSum = 0;

//         for(int i=0; i<k; i++){
//             lSum += nums[i];
//         }

//         int maxSum = lSum;
//         int i=1;

//         while(lSum > 0){
//             lSum -= nums[k-i];
//             rSum += nums[n-i];
//             maxSum = max(maxSum, lSum + rSum);
//             i++;
//         }
        
//         return maxSum;
//     }
// };