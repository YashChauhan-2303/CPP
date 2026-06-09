// class Solution {
// public:
//     long long maxTotalValue(vector<int>& nums, int k) {
//         long long mn = nums[0];
//         long long mx = nums[0];

//         for (int x : nums) {
//             if (x < mn) mn = x;
//             if (x > mx) mx = x;
//         }

//         return 1LL * k * (mx - mn);
//     }
// };