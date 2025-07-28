// class Solution {
// public:
//     int countMaxOrSubsets(vector<int>& nums) {
//         int bitOrResult = 0;

//         for(auto x: nums){
//             bitOrResult |= x;
//         }

//         int n = nums.size();
//         int numOfSubset = 1<<n;
//         int count = 0;

//         for(int i=0; i<numOfSubset; i++){
//             int bitOr = 0;
//             int x = i;
//             for(int j=0; j<n; j++){
//                 if (x & 1) {
//                     bitOr |= nums[j];
//                 }
//                 x >>= 1;
//             }
//             if(bitOr == bitOrResult) count++;
//         }

//         return count;
//     }
// };