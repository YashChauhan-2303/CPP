// class Solution {
// public:
//     string addBinary(string a, string b) {
//         string ans;
//         int carry = 0;

//         reverse(a.begin(), a.end());
//         reverse(b.begin(), b.end());

//         int i=0, j=0;

//         while(i< a.size() && j < b.size()){
//             if(a[i] == '1' && b[j] == '1'){
//                 if(carry == 1) {
//                     ans += '1';
//                     carry = 1;
//                 } else {
//                     ans += '0';
//                     carry = 1;
//                 } 
//             } else if (a[i] == '0' && b[j] == '0'){
//                 if(carry == 1) {
//                     ans += '1';
//                     carry = 0;
//                 } else {
//                     ans += '0';
//                     carry = 0;
//                 }
//             } else {
//                 if(carry == 1) {
//                     ans += '0';
//                     carry = 1;
//                 } else {
//                     ans += '1';
//                     carry = 0;
//                 }
//             }
//             i++;
//             j++;
//         }

//         while(i < a.size()){
//             if(a[i] == '1'){
//                 if(carry == 1){
//                     ans += '0';
//                     carry = 1;
//                 } else {
//                     ans += '1';
//                     carry = 0;
//                 }
//             } else {
//                 if(carry == 1){
//                     ans += '1';
//                     carry = 0;
//                 } else {
//                     ans += '0';
//                     carry = 0;
//                 }
//             }
//             i++;
//         }

//         while(j < b.size()){
//             if(b[j] == '1'){
//                 if(carry == 1){
//                     ans += '0';
//                     carry = 1;
//                 } else {
//                     ans += '1';
//                     carry = 0;
//                 }
//             } else {
//                 if(carry == 1){
//                     ans += '1';
//                     carry = 0;
//                 } else {
//                     ans += '0';
//                     carry = 0;
//                 }
//             }
//             j++;
//         }

//         if(carry==1) ans += '1';

//         reverse(ans.begin(), ans.end());

//         return ans;
//     }
// };