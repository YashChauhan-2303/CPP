// class Solution {
// public:
//     vector<vector<int>> bfs(vector<vector<int>>& image, int sr, int sc, int color){
//         int n = image.size();
//         int m = image[0].size();

//         queue<pair<int,int>> q;
//         q.push({sr,sc});
//         int starting_pixel = image[sr][sc];
//         image[sr][sc] = color;

//         vector<vector<int>> vis(n, vector<int>(m,-1));

//         vector<int> drow = {0,-1,+1,0};
//         vector<int> dcol = {+1,0,0,-1};

//         while(!q.empty()){
//             int r = q.front().first;
//             int c = q.front().second;

//             q.pop();

//             for(int i=0; i<4; i++){
//                 int nrow = r + drow[i];
//                 int ncol = c + dcol[i];

//                 if(nrow >= 0 && nrow < n && ncol >= 0 && ncol <m && vis[nrow][ncol] != color){
//                     if(image[nrow][ncol] == starting_pixel){
//                         q.push({nrow,ncol});
//                         image[nrow][ncol] = color;
//                         vis[nrow][ncol] = color;
//                     } else {
//                         vis[nrow][ncol] = color;
//                     }
//                 }
//             }
//         }

//         return image;
//     }

//     vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
//         return bfs(image,sr,sc,color);
//     }
// };