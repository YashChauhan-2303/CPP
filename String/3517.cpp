// class Solution {
// public:
//     string smallestPalindrome(string s) {
//         vector<int> alphabets(26,0);
//         for(auto x: s){
//             alphabets[x-'a']++;
//         }
//         string left = "";
//         string mid = "";
//         for(int i=0; i<26; i++){
//             for(int j=0; j<alphabets[i]/2; j++){
//                 left+=('a'+i);
//             }
//             if(alphabets[i] % 2 == 1){
//                 mid+=('a'+i);
//             }
//         }
//         string right = left;
//         reverse(right.begin(),right.end());
//         string result = left + mid + right;
//         return result;
//     }
// };