// class Solution {
// public:
//     bool hasAlternatingBits(int n) {
//         bool alt = n&1;
//         n = n>>1;
//         while(n>0){
//             if((alt == true && (n&1) == 1) || (alt == false && (n&1) == 0)){
//                 return false;
//             }
//             alt = !alt;
//             n = n>>1;
//         }
//         return true;
//     }
// };