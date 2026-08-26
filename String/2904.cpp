// class Solution {
// public:
//     string shortestBeautifulSubstring(string s, int k) {
//         int n = s.size();
//         vector<int> mpp(2,0);
//         int len = INT_MAX;
//         int start = 0, end = 0;
//         int capture_i = -1, capture_j = -1;
//         for(end = 0; end<n; end++){
//             mpp[s[end] - '0']++;
//             while(mpp[1] > k){
//                 mpp[s[start] - '0']--;
//                 start++;
//             }
//             while(mpp[1] == k && s[start] == '0') {
//                 start++;
//             }
//             if(mpp[1] == k) {
//                 int currLen = end - start + 1;

//                 if(currLen < len || (currLen == len && s.substr(start, currLen) < s.substr(capture_i, len))) {
//                     capture_i = start;
//                     capture_j = end;
//                     len = currLen;
//                 }
//             }
//         }
//         if(capture_i == -1) return "";
//         return s.substr(capture_i, len);
//     }
// };