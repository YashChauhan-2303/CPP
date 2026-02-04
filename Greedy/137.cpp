// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         unordered_map<int,int> mpp;
//         for(auto n: nums){
//             mpp[n]++;
//         }
//         for(auto &[num,count]:mpp){
//             if(count == 1) return num;
//         }
//         return -1;
//     }
// };

// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         int n=nums.size();
//         for(int i=0;i<n-1;i+=3){
//             if(nums[i]!=nums[i+1]){
//                 return nums[i];
//             }
//         }
//         return nums[n-1];
//     }
// };