// class Solution {
// public:
//     bool isMonotonic(vector<int>& nums) {
//         if(nums.size()==1) return true;
//         int j=0;
//         while(j<nums.size()-1 && nums[j] == nums[j+1]) j++;
//         if(j<nums.size()-1 && nums[j] >= nums[j+1]){
//             for(int i=j; i<nums.size()-1; i++){
//                 if(nums[i] < nums[i+1]) return false;
//             }
//         } else {
//             for(int i=1; i<nums.size()-1; i++){
//                 if(nums[i] > nums[i+1]) return false;
//             }
//         }
//         return true;
//     }
// };