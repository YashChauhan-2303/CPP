// class Solution {
// public:
//     int removeElement(vector<int>& nums, int val) {
//         int k = -1;

//         for(int i=0; i<nums.size(); i++){
//             int j = i+1;
//             while(j<nums.size() &&  nums[j] == val){
//                 j++;
//             }
//             if(j<nums.size() && nums[i] == val){
//             nums[i] = nums[j];
//             nums[j] = val;
//             }
//         }

//         for(int i=0; i<nums.size(); i++){
//             if (nums[i] != val) {
//                 k = i;
//             } 
//         }

//         return k+1;
//     }
// };

// class Solution {
// public:
//     int removeElement(vector<int>& nums, int val) {
//         int k = 0; // write index
//         for (int i = 0; i < nums.size(); i++) {
//             if (nums[i] != val) {
//                 nums[k++] = nums[i];
//             }
//         }
//         return k;
//     }
// };
