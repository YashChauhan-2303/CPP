// class Solution {
// public:
//     int helper(vector<int>& nums,vector<int>& dp, int i){
//         if(i==0) return nums[0];
//         if(i<0) return 0;
//         if(dp[i]!= -1) return dp[i];
//         int left = helper(nums,dp,i-2) + nums[i];
//         int right = helper(nums,dp,i-1) + 0;
//         return dp[i] = max(left,right);
//     }

//     int rob(vector<int>& nums) {
//         if(nums.size()==1) return nums[0];
//         vector<int> temp1,temp2;
//         vector<int> dp1(nums.size(),-1);
//         vector<int> dp2(nums.size(),-1);
//         for(int i=0; i<nums.size(); i++){
//             if(i!=0) temp1.push_back(nums[i]);
//             if(i!=nums.size()-1) temp2.push_back(nums[i]);
//         }
//         return max(helper(temp1,dp1,temp1.size()-1),helper(temp2,dp2,temp2.size()-1));
//     }
// };