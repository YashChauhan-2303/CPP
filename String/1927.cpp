// class Solution {
// public:
//     bool sumGame(string num) {
//         int n = num.size();
//         int firstHalfSum = 0, secondHalfSum = 0, numOfBlankInFirstHalf = 0, numOfBlankInSecondHalf = 0;
//         for(int i=0; i<n; i++){
//             if(num[i] == '?'){
//                 if(i<n/2){
//                     numOfBlankInFirstHalf++;
//                 } else {
//                     numOfBlankInSecondHalf++;
//                 }
//             } else {
//                 if(i<n/2){
//                     firstHalfSum += num[i] - '0';
//                 } else {
//                     secondHalfSum += num[i] - '0';
//                 }
//             }    
//         }

//         int diff = firstHalfSum - secondHalfSum;
//         int blankDiff = numOfBlankInSecondHalf - numOfBlankInFirstHalf;

//         if(diff * 2 == 9 * blankDiff)
//             return false;

//         return true;
//     }       
// };