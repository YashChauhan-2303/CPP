// class Solution {
// public:
//     int minimumDeletions(vector<int>& nums) {
//         int n = nums.size();
//         int min_i=0, max_i = 0;
//         for(int i=1; i<n; i++){
//             if(nums[i] > nums[max_i]){
//                 max_i = i;
//             }
//             if(nums[i] < nums[min_i]){
//                 min_i = i;
//             }
//         }
//         int bothLeft = max(min_i, max_i) + 1;

//         int bothRight = n - min(min_i, max_i);

//         int oneEach = min(min_i, max_i) + 1 + n - max(min_i, max_i);

//         return min({bothLeft, bothRight, oneEach});
//     }
// };