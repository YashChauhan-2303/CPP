// <------------ Solution 1 --------------------->

// class Solution {
// public:
//     bool helper(int i, int sum, int target, vector<int>& nums, vector<vector<int>>& dp){
//         if (sum == target) return true;                
//         if (i >= nums.size() || sum > target) return false; 
//         if(dp[i][target] != -1) return dp[i][target];
//         bool take = helper(i+1, sum + nums[i], target, nums, dp);
//         bool notTake = helper(i+1, sum, target, nums, dp);
//         return dp[i][sum] = take || notTake;
//     }

//     bool canPartition(vector<int>& nums) {
//         int total = 0;
//         for (int x : nums) total += x;
//         if (total % 2 != 0) return false;   

//         int target = total / 2;
//         vector<vector<int>> dp(nums.size(), vector<int>(target+1, -1));

//         return helper(0, 0, target, nums, dp);
//     }
// };

// <------------ Solution 2 --------------------->

// class Solution {
// public:
//     bool canPartition(vector<int>& nums) {
//         int total = 0;
//         for (int x : nums) total += x;
//         if (total % 2 != 0) return false; 
//         int target = total / 2;
//         vector<bool> dp(target + 1, false);
//         dp[0] = true;
//         for (int num : nums) {
//             for (int s = target; s >= num; s--) {
//                 dp[s] = dp[s] || dp[s - num];
//             }
//         }
//         return dp[target];
//     }
// };