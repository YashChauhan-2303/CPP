// class Solution {
// public:
//     int maxScore(string s) {
//         int n = s.size();

//         vector<int> leftZeroCount(n+1,0);
//         vector<int> rightOneCount(n+1,0);

//         for(int i=1; i<n; i++){
//             if(s[i-1] == '0'){
//                 leftZeroCount[i] = leftZeroCount[i-1] + 1;
//             } else {
//                 leftZeroCount[i] = leftZeroCount[i-1];
//             }
//         }

//         for(int i=n-2; i>=0; i--){
//             if(s[i+1] == '1'){
//                 rightOneCount[i] = rightOneCount[i+1] + 1;
//             } else {
//                 rightOneCount[i] = rightOneCount[i+1];
//             }
//         }

//         int maxScore = -1;

//         for(int i=0; i<n; i++){
//             maxScore = max(maxScore, leftZeroCount[i+1] + rightOneCount[i]);
//         }

//         return maxScore;
//     }
// };