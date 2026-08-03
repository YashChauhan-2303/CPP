// class Solution {
// public:
//     int countCharacters(vector<string>& words, string chars) {
//         int result = 0;

//         vector<int> charCount(26,0);

//         for(auto c: chars){
//             charCount[c - 'a']++;
//         }

//         for(auto word: words){
//             vector<int> copy = charCount;
//             for(auto chr: word){
//                 copy[chr - 'a']--;
//             }
//             bool ok = true;
//             for(int i=0; i<26; i++){
//                 if(copy[i]<0){
//                     ok = false;
//                     break;
//                 }
//             }
//             if(ok){
//                 result += word.size();
//             }
//         }

//         return result;
//     }
// };