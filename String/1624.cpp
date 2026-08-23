// class Solution {
// public:
//     int maxLengthBetweenEqualCharacters(string s) {
//         int n = s.size();
//         unordered_map<char,vector<int>> mpp;
//         for(int i=0; i<n; i++){
//             mpp[s[i]].push_back(i);
//         }
//         int maxLen = -1;
//         for(auto& [chr, arr]: mpp){
//             if(arr.size() == 1) continue;
//             int siz = arr.size();
//             maxLen = max(maxLen, arr[siz-1] - arr[0] - 1);
//         }
//         return maxLen;
//     }
// };