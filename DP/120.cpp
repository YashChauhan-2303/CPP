// class Solution {
// public:
//     int helper(vector<vector<int>>& triangle, int m, int n, vector<vector<int>>& dp){
//         if(m==0 && n==0) return triangle[0][0];
//         if(m<0 || n<0 || n >= triangle[m].size()) return INT_MAX;
//         if(dp[m][n] != -1) return dp[m][n];
//         int up = helper(triangle,m-1,n,dp); 
//         int upLeft = helper(triangle,m-1,n-1,dp);
//         int best = min(up, upLeft);
//         if(best == INT_MAX) return dp[m][n] = INT_MAX;
//         return dp[m][n] = triangle[m][n] + best; 
//     }

//     int minimumTotal(vector<vector<int>>& triangle) {
//         int m = triangle.size();
//         int n = triangle[m-1].size();
//         vector<vector<int>> dp;
//         for (int i = 0; i < m; i++) {
//             dp.push_back(vector<int>(triangle[i].size(), -1));
//         }
//         int ans = INT_MAX;
//         for (int j = 0; j < triangle[m-1].size(); j++) {
//             ans = min(ans, helper(triangle, m-1, j, dp));
//         }
//         return ans;
//         }
// };