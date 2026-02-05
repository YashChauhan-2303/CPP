// class Solution {
// public:
//     vector<int> constructTransformedArray(vector<int>& nums) {
//         int N = nums.size();
//         vector<int> result(N,0);
//         for(int i=0; i<N; i++){
//             int num = nums[i];
//             while(num < 0) num = N+num;
//             num += i;
//             num = num%N;
//             result[i] = nums[num];
//         }
//         return result;
//     }
// };

// class Solution {
// public:
//     vector<int> constructTransformedArray(vector<int>& nums) {
//         int N = nums.size();
//         vector<int> result(N,0);
//         for(int i=0; i<N; i++){
//             int num;
//             num = ((i + nums[i]) % N + N) % N;
//             result[i] = nums[num];
//         }
//         return result;
//     }
// };