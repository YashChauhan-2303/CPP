// class Solution {
// public:
//     int longestOnes(vector<int>& nums, int k) {
//         int i = 0, r = 0;
//         int maxLen = 0;
//         int count0 = 0;

//         while(r<nums.size()){
//             if(nums[r] == 0) count0++;
//             while (count0 > k) {
//                 if (nums[i] == 0) count0--;
//                 i++;
//             }
//             maxLen = max(maxLen, r - i + 1);
//             r++;
//         }
//         return maxLen;
//     }
// };