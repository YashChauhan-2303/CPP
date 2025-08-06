// class Solution {
// public:
//     int helper(vector<int>& nums,int i){
//         if(i == 0 ) return nums[0];
//         if(i < 0 ) return 0;
//         int pick = helper(nums,i-2) + nums[i];
//         int notPick = helper(nums,i-1) + 0;
//         return max(pick,notPick);
//     }

//     int rob(vector<int>& nums) {
//         return helper(nums,nums.size()-1);
//     }
// };

// class Solution {
// public:
//     int helper(vector<int>& nums,vector<int>& dp,int i){
//         if(i == 0 ) return nums[0];
//         if(i < 0 ) return 0;
//         if(dp[i] != -1) return dp[i];
//         int pick = helper(nums,dp,i-2) + nums[i];
//         int notPick = helper(nums,dp,i-1) + 0;
//         return dp[i] = max(pick,notPick);
//     }

//     int rob(vector<int>& nums) {
//         vector<int> dp(nums.size(),-1);
//         return helper(nums,dp,nums.size()-1);
//     }
// };