// class Solution {
// public:
//     int helper(vector<int>& nums, vector<int>& dp, int ind){
//         if(ind < 0) return 0;
//         if(ind == 0 || ind == 1) return nums[ind];
//         if(dp[ind] != -1) return dp[ind];
//         int climbOne = helper(nums,dp,ind-1) + nums[ind];
//         int climbTwo = helper(nums,dp,ind-2) + nums[ind];
//         return dp[ind] = min(climbOne,climbTwo);
//     }

//     int minCostClimbingStairs(vector<int>& cost) {
//         vector<int> dp(cost.size(),-1);
//         return min(helper(cost, dp, cost.size() - 1), helper(cost, dp, cost.size() - 2));
//     }
// };