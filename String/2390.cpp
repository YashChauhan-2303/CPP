//2390. Removing Stars From a String

// class Solution {
// public:
//     string removeStars(string s) {
//         string ans;
//         int i=0;
//         while(i < s.size()){
//             if (s[i] == '*') {
//                 ans.pop_back();
//             } else {
//                 ans.push_back(s[i]);
//             }
//             i++;
//         }
//         return ans;
//     }
// };