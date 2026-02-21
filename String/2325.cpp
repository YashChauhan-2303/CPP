// class Solution {
// public:
//     string decodeMessage(string key, string message) {
//         unordered_map<char,char> mpp;
//         string result;
//         int i=0;
//         char y = 'a';
//         while(i<key.size()){
//             while(key[i]==' ') i++;
//             if(mpp.find(key[i]) == mpp.end()){
//                 mpp[key[i]] = y;
//                 y++;
//             } 
//             i++;
//         }
//         for(int j=0; j<message.size(); j++){
//             if(message[j] == ' '){
//                 result += ' ';
//             } else {
//                 result += mpp[message[j]];
//             }
//         }
//         return result;
//     }
// };