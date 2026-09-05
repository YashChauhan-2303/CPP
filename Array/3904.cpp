// class Solution {
// public:
//     int firstStableIndex(vector<int>& nums, int k) {
//         int n = nums.size();
//         vector<pair<int,int>> arr;
//         int maxEle = nums[0];
//         for(int i=0; i<n; i++){
//             maxEle = max(maxEle, nums[i]);
//             arr.push_back({maxEle,-1});
//         }
//         int minEle = nums[n-1];
//         for(int i=n-1; i>=0; i--){
//             minEle = min(minEle, nums[i]);
//             arr[i].second = minEle;
//         }
//         int minScore = INT_MAX;
//         int index = -1;
//         for(int i=0; i<n; i++){
//             int maxE = arr[i].first;
//             int minE = arr[i].second;
//             int score = maxE - minE;
//             if(score <= k && score < minScore){
//                 minScore = score;
//                 return i;
//             }
//         }
//         return index;
//     }
// };