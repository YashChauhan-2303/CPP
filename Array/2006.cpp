// class Solution {
// public:
//     int countKDifference(vector<int>& nums, int k) {
//         int  cnt = 0;
//         unordered_map<int,int> mpp;
//         for(int i=0; i<nums.size(); i++){
//             if(mpp.count(nums[i]+k)) cnt += mpp[nums[i]+k];
//             if(mpp.count(nums[i]-k)) cnt += mpp[nums[i]-k];
//             mpp[nums[i]]++;
//         }
//         return cnt;
//     }
// };