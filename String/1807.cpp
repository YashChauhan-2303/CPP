// class Solution {
// public:
//     string evaluate(string s, vector<vector<string>>& knowledge) {
//         unordered_map<string, string> mp;
//         for(auto& arr : knowledge) {
//             mp[arr[0]] = arr[1];
//         }
//         int n = s.size();
//         string result = "";
//         int i=0;

//         while(i<n){
//             if(s[i]=='('){
//                 i++;
//                 string word;
//                 while(s[i]!=')'){
//                     word.push_back(s[i]);
//                     i++;
//                 }
//                 if(mp.count(word))
//                     result += mp[word];
//                 else
//                     result += '?';
//             } else {
//                 result.push_back(s[i]);
//             }
//             i++;
//         }
//         return result;
//     }
// };