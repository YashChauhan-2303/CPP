// class Solution {
// public:
//     int longestSubsequence(vector<int>& nums) {
//         int n = nums.size();
//         int XOR = nums[0];
//         bool hasNonZero = false;

//         for(int i=1; i<n; i++){
//             if(nums[i] != 0) hasNonZero = true;
//             XOR ^= nums[i];
//         }

//         if(XOR == 0 && hasNonZero == false) return 0;

//         return (XOR == 0)?n-1:n;
//     }
// };