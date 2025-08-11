// class Solution {
// public:
//     const int MOD = 1e9 + 7;
//     vector<int> productQueries(int n, vector<vector<int>>& queries) {
//         vector<int> powers;
//         for(int i=0; (1 << i) <= n; i++){
//             if(n&(1 << i)) powers.push_back(1<<i);
//         }
//         vector<int> result;
//         for(auto num: queries){
//             long long prod = 1;
//             for(int i=num[0]; i<=num[1]; i++){
//                 prod = (prod * powers[i])%MOD;
//             }
//             result.push_back(prod);
//         }
//         return result;
//     }
// };