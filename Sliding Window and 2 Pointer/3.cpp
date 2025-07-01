// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         unordered_map<char, int> mp;
//         int start = 0, maxLen = 0;
        
//         for (int end = 0; end < s.length(); end++) {
//             char ch = s[end];
            
//             if (mp.find(ch) != mp.end() && mp[ch] >= start) {
//                 start = mp[ch] + 1;
//             }

//             mp[ch] = end; 
//             maxLen = max(maxLen, end - start + 1); 
//         }
//         return maxLen;
//     }
// };