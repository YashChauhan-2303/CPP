// class Solution {
// public:
//     int helper(vector<vector<int>>& matrix, int m, int n, vector<vector<int>>& dp){
//         if(m<0 || n<0) return INT_MAX;
//         if(m==0) return matrix[0][n]; 
//         if(dp[m][n] != -1) return dp[m][n];
//         int left = INT_MAX, right = INT_MAX, middle = INT_MAX;
//         if(n-1>=0) left = helper(matrix,m-1,n-1,dp);
//         middle = helper(matrix,m-1,n,dp);
//         if(n+1< matrix.size()) right = helper(matrix,m-1,n+1,dp);
//         return dp[m][n] = matrix[m][n] + min(middle, min(left,right));

//     }

//     int minFallingPathSum(vector<vector<int>>& matrix) {
//         int m = matrix.size();
//         vector<vector<int>> dp(m, vector<int>(m,-1));
//         int ans = INT_MAX;
//         for(int i=0; i<m; i++){
//             ans = min(ans, helper(matrix,m-1,i,dp));
//         }
//         return ans;
//     }
// };