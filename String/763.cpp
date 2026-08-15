// class Solution {
// public:
//     vector<int> partitionLabels(string s) {
//         int n = s.size();
//         vector<int> aplhabets(26,-1);
//         for(int i=0; i<n; i++){
//             aplhabets[s[i]-'a'] = i;
//         }
//         int last = 0;
//         int max_ind = 0;
//         vector<int> result;
//         for(int i=0; i<n; i++){
//             max_ind = max(max_ind, aplhabets[s[i] - 'a']);
//             if(i==max_ind){
//                 result.push_back(i-last+1);
//                 last = i+1;
//             }
//         }

//         return result;
//     }
// };