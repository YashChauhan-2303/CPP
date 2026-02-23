// class Solution {
// public:
//     bool hasAllCodes(string s, int k) {
//         unordered_set<string> mpp;
//         int j;
//         for(j=0;j+k<=s.size();j++){
//             string p;
//             mpp.insert(s.substr(j, k));
//         }
//         int si = mpp.size();
//         int x = 1<<k;
//         if(x != si) return false;
//         return true;
//     }
// };