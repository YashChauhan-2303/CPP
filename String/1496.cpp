// class Solution {
// public:
//     bool isPathCrossing(string path) {
//         set<pair<int,int>> st;
//         int i=0, j=0;
//         st.insert({i,j});
//         for(auto& dir: path){
//             if(dir == 'N'){
//                 j++;
//                 if(st.find({i,j}) != st.end()) return true;
//                 st.insert({i,j});
//             }
//             if(dir == 'S'){
//                 j--;
//                 if(st.find({i,j}) != st.end()) return true;
//                 st.insert({i,j});
//             }
//             if(dir == 'E'){
//                 i++;
//                 if(st.find({i,j}) != st.end()) return true;
//                 st.insert({i,j});
//             }
//             if(dir == 'W'){
//                 i--;
//                 if(st.find({i,j}) != st.end()) return true;
//                 st.insert({i,j});
//             }
//         }
//         return false;
//     }
// };