// class Solution {
// public:
//     bool isTrionic(vector<int>& nums) {
//         bool i1 = false;
//         bool d1 = false;
//         bool i2 = false;

//         for (int i = 0; i < nums.size() - 1; i++) {
//             if (nums[i] == nums[i + 1]) return false;
//             if (i2 && nums[i] > nums[i + 1]) return false;
//             if (nums[i] < nums[i + 1]) {
//                 if (!i1 && !d1) {
//                     i1 = true;          
//                 } else if (i1 && d1 && !i2) {
//                     i2 = true;          
//                 }
//             }
//             else { 
//                 if (i1 && !d1) {
//                     d1 = true;          
//                 } else if (!i1) {
//                     return false;       
//                 }
//             }
//         }    

//         return i1 && d1 && i2;
//     }
// };
