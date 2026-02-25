// class Solution {
// public:
//     static bool swap1(int a, int b){
//         int aBits = 0, bBits = 0;
//         int a1 = a, b1 = b;
//         while(a1 > 0){
//             if(a1&1) aBits++;
//             a1 >>= 1;
//         }
//         while(b1 > 0){
//             if(b1&1) bBits++;
//             b1 >>= 1;
//         }
//         if(aBits == bBits) {
//             if(a > b) {
//                 return false;
//                 }
//         } else if (aBits > bBits){
//             return false;
//         }
//         return true;
//     }
//     vector<int> sortByBits(vector<int>& arr) {
//         sort(arr.begin(), arr.end(), swap1);
//         return arr;
//     }
// };