// GREEDY -------- (not always right answer)
// class Solution {
// public:
//     int coinChange(vector<int>& coins, int amount) {
//         sort(coins.begin(),coins.end());
//         int count = 0;
//         int j = coins.size()-1;
//         while(j >= 0 && amount > 0){
//             int coin = coins[j];
//             while(amount >= coin) {
//                 amount -= coin;
//                 count++;
//             }
//             j--;
//         }
//         return  amount == 0 ? count : -1;
//     }
// };

// DP (right approach)
// class Solution {
// public:
//     int helper(int i, int amt, vector<int>& coins, vector<vector<int>>& dp){
//         if (i == 0) {
//             if(amt % coins[0] == 0) return amt/coins[0];
//             return 1e9;
//         }
//         if(dp[i][amt] != -1) return dp[i][amt];
//         int notPick = helper(i-1, amt, coins,dp);
//         int pick = 1e9;
//         if(coins[i] <= amt){
//             pick = 1 + helper(i, amt-coins[i], coins,dp);
            
//         }
//         return dp[i][amt] = min(pick,notPick);
//     }

//     int coinChange(vector<int>& coins, int amount) {
//         int n = coins.size();
//         vector<vector<int>> dp(n, vector<int>(amount+1, -1));
//         int ans = helper(n-1,amount,coins,dp);
//         return ans == 1e9 ? -1: ans;
//     }
// };