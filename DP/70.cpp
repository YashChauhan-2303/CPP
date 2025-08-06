// class Solution {
// public:
//     int climbStairs(int n) {
//         if(n == 0) return 1;
//         if(n == 1) return 1;
//         int left = climbStairs(n-1);
//         int right = climbStairs(n-2);
//         return left+right;
//     }
// };

// class Solution {
// public:
//     int helper(int n, vector<int>& dp) {
//         if(n < 0) return 0;
//         if(n == 0 || n == 1) return 1;
//         if(dp[n] != -1) return dp[n];
//         return dp[n] = helper(n - 1, dp) + helper(n - 2, dp);
//     }
//     int climbStairs(int n) {
//         vector<int> dp(n + 1, -1);
//         return helper(n, dp);
//     }
// };