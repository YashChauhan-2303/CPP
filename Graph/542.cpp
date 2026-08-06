// int n = mat.size();
//         int m = mat[0].size();

//         vector<pair<int,int>> directions = {{1,0},{0,1},{-1,0},{0,-1}};

//         vector<vector<int>> result(n, vector<int>(m,-1));

//         queue<pair<int,int>> q;

//         for(int i=0; i<n; i++){
//             for(int j=0; j<m; j++){
//                 if(mat[i][j] == 0){
//                     q.push({i,j});
//                     result[i][j] = 0;
//                 }
//             }
//         }

//         while(!q.empty()){
//             int node_i = q.front().first;
//             int node_j = q.front().second;

//             q.pop();

//             for(auto& dir: directions){
//                 int new_i = node_i + dir.first;
//                 int new_j = node_j + dir.second;

//                 if(new_i<n && new_i>=0 && new_j<m && new_j>=0 && result[new_i][new_j]==-1){
//                     result[new_i][new_j] = result[node_i][node_j]+1;
//                     q.push({new_i,new_j});
//                 }
//             }
//         }

//         return result;