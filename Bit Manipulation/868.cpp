// class Solution {
// public:
//     int binaryGap(int n) {
//         int gap = 0;
//         int i=0,j=0;
//         bool found = false;
//         while(n>0){
//             int dig = n&1;
//             if(dig == 1){
//                 if(i==0 && !found){
//                     i = j;
//                     found = true;
//                 } else {
//                     gap = max(gap,j-i);
//                     i=j;
//                 }
//             }
//             j++;
//             n>>=1;
//         }
//         return gap;
//     }
// };