// class Solution {
// public:
//     int modify(string pattern, string& s, int val){
//         int i = 0;
//         int tot = 0;
//         string newS;

//         for(int i=0; i<s.size(); i++){
//             if(!newS.empty() && newS.back() == pattern[0] && s[i] == pattern[1]){
//                 tot += val;
//                 newS.pop_back();
//             } else {
//                 newS.push_back(s[i]);
//             }
//         }

//         s = newS;
//         return tot;
//     }

//     int maximumGain(string s, int x, int y) {
//         string copy = s;
//         int points = 0;

//         if(x>y){
//             points += modify("ab",copy,x);
//             points += modify("ba",copy,y);
//         } else {
//             points += modify("ba",copy,y);
//             points += modify("ab",copy,x);
//         }

//         return points;
//     }
// };