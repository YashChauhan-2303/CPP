// class Solution {
// public:
//     int solve(int i, int sum, vector<int>& nums, int target, vector<vector<int>>& dp, int total){
//         if(i>=nums.size()){
//             if(sum == target) return 1;
//             return 0;
//         }

//         if(dp[i][sum + total] != INT_MIN){
//             return dp[i][sum + total];
//         }
        
//         int use_neg = solve(i+1, (nums[i]*-1 + sum), nums, target,dp,total);
//         int use_pos = solve(i+1, (nums[i] + sum), nums, target,dp,total);

//         return dp[i][sum + total] = (use_neg + use_pos);
//     }

//     int findTargetSumWays(vector<int>& nums, int target) {
//         int n = nums.size();
//         int total = accumulate(nums.begin(), nums.end(), 0);
//         vector<vector<int>> dp(n+1,vector<int>(2 * total + 1, INT_MIN));
//         int count = solve(0,0,nums,target,dp,total);
//         return count;
//     }
// };