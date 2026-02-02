// class Solution {
// public:
//     vector<pair<int, char>> mapping(string n){
//         vector<pair<int, char>> groups;
//         int count = 1;
//         for (int i = 1; i < n.length(); i++) {
//             if (n[i] == n[i - 1]) {
//                 count++;
//             } else {
//                 groups.push_back({count, n[i - 1]});
//                 count = 1;
//             }
//         }
//         groups.push_back({count, n.back()});
//         return groups;
//     }

//     string pairing(vector<pair<int, char>> groups){
//         string a = "";
//         for(auto &[count,dig]: groups){
//             a = a + to_string(count) + dig;
//         }
//         return a;
//     }

//     string countAndSay(int n) {
//         if(n==1) return "1";
//         string prev = "1";
//         for (int i = 2; i <= n; i++) {
//             auto groups = mapping(prev);
//             prev = pairing(groups);
//         }
//         return prev;
//     }
// };