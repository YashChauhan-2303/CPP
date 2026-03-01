// class Solution {
// public:
//     int minPartitions(string n) {
//         int maxDig = INT_MIN;
//         int i = 0;
//         while(i<n.size()){
//             maxDig = max(maxDig,n[i] - '0');
//             i++;
//         }
//         return maxDig;
//     }
// };