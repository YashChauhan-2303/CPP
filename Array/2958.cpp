// class Solution {
// public:
//     int maxSubarrayLength(vector<int>& nums, int k) {
//         int n = nums.size();
//         if(n==1) return 1; // minLen of nums is 1 and min K is also 1 so it will always work.

//         //using 2 pointer
//         int i=0, j=1; // i for start and j for end;
//         unordered_map<int,int> mpp; //to keep a track of freq
//         mpp[nums[i]]++; //initializing map for nums[0]
//         int subMax = 0; //keeping subarray len track

//         for(j=1; j<n; j++){
//             mpp[nums[j]]++;
//             while(mpp[nums[j]] > k){
//                 mpp[nums[i]]--;
//                 i++;
//             }
//             subMax = max(subMax, j-i+1);
//         }
//         return subMax;
//     }
// };