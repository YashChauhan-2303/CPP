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

// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         int i = 0, r = 0;
//         unordered_map<char,int> mp;
//         int maxLen = 0;

//         while(r<s.size()){
//             if(mp.find(s[r]) == mp.end()){
//                 mp[s[r]] = r;
//             } else {
//                 i = max(i,mp[s[r]]+1);
//                 mp[s[r]] = r;
//             }
//             maxLen = max(maxLen, r-i+1);
//             r++;
//         }

//         return maxLen;
//     }
// };