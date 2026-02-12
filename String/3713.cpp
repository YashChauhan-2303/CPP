// class Solution {
// public:
//     // bool isBalanced(unordered_map<char,int> mpp, int value){
//     //     for(auto it: mpp){
//     //         if(it.second != value) return false;
//     //     }
//     //     return true;
//     // }

//     // int longestBalanced(string s) {
//     //     int ans = 0;
//     //     for(int i=0; i<s.size();i++){
//     //         unordered_map<char,int> mpp;
//     //         for(int j=i;j<s.size();j++){
//     //             mpp[s[j]]++;
//     //             if(isBalanced(mpp,mpp[s[j]])){
//     //                 ans = max(ans,j-i+1);
//     //             }
//     //         }
//     //     }
//     //     return ans;
//     // }

//     int longestBalanced(string s) {

//         int n = s.size();
//         int ans = 0;

//         for(int i=0;i<n;i++){

//             vector<int> freq(26,0);
//             int distinct = 0;
//             int mx = 0;

//             for(int j=i;j<n;j++){

//                 int c = s[j]-'a';

//                 if(freq[c]==0) distinct++;
//                 freq[c]++;

//                 mx = max(mx,freq[c]);

//                 int len = j-i+1;

//                 if(mx*distinct == len)
//                     ans = max(ans,len);
//             }
//         }
//         return ans;
//     }
// };

