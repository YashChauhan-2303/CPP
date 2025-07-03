// class Solution {
// public:
//     int characterReplacement(string s, int k) {
//         int i=0, j=0;
//         int maxLen = 0;
//         int maxFreq = 0;
//         int count[26] = {0};

//         while(j<s.size()){
//             count[s[j] - 'A']++;
//             maxFreq = max(maxFreq, count[s[j] - 'A']);

//             while((j - i + 1) - maxFreq > k){
//                 count[s[i] - 'A']--;
//                 i++;
//             }

//             maxLen = max(maxLen,j-i+1);
//             j++;
//         }

//         return maxLen;
//     }
// };