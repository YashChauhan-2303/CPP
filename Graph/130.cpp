// class Solution {
// public:
//     void bfs(vector<vector<char>>& board){
//         int n = board.size();
//         int m = board[0].size();

//         vector<vector<int>> vis(n, vector<int>(m,-1));

//         for(int i=0; i<n; i++){
//             for(int j=0; j<m; j++){
//                 if(i==0 || i==n-1 || j==0 || j==m-1){
//                     if(board[i][j] == 'O'){
//                         vis[i][j] = 1; 
//                     } 
//                 }
//             }
//         }


//         queue<pair<int,int>> q;

//         vector<int> dir_i = {+1,0,-1,0};
//         vector<int> dir_j = {0,+1,0,-1};

//         for(int i=0; i<n; i++){
//             for(int j=0; j<m; j++){
//                 if(vis[i][j] == 1){
//                     q.push({i,j});
//                     while(!q.empty()){
//                         int ii = q.front().first;
//                         int jj = q.front().second;

//                         q.pop();

//                         for(int k=0; k<4; k++){
//                             int ni = ii + dir_i[k];
//                             int nj = jj + dir_j[k];

//                             if(ni >= 0 && ni < n && nj >= 0 && nj < m && board[ni][nj] == 'O' && vis[ni][nj] != 1){
//                                 q.push({ni,nj});
//                                 vis[ni][nj] = 1;
//                             }
//                         }
//                     }
//                 }
//             }
//         }

//         for(int i=0; i<n; i++){
//             for(int j=0; j<m; j++){
//                 if(board[i][j]=='O' && vis[i][j] != 1){
//                     board[i][j] = 'X';
//                 }
//             }
//         }
//     }

//     void solve(vector<vector<char>>& board) {
//         bfs(board);
//     }
// };