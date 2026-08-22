// class Solution {
// public:
//     bool checkDivisibility(int n) {
//         int x = n;
//         int sum = 0;
//         int prod = 1;
//         while(x>0){
//             int dig = x%10;
//             sum += dig;
//             prod *= dig;
//             x /= 10;
//         }
//         int totalSum = sum + prod;
//         return n%totalSum==0;
//     }
// };