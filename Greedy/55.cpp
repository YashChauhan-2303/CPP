// class Solution {
// public:
//     bool canJump(vector<int>& nums) {
//         if(nums.size() <= 1) return true;
//         int maxPosi = nums[0];

//         for(int i=0; i<nums.size()-1; i++){
//             if(i <= maxPosi)   maxPosi = max(maxPosi, nums[i]+i);
//             if(maxPosi >= nums.size()-1) return true;
//         }

//         return false;
//     }
// };