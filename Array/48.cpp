//48. Rotate Image

#include<bits/stdc++.h>
using namespace std;

//BRUTE-FORCE
// void rotate(vector<vector<int>>& matrix) {
//     vector<vector<int>> copy = matrix;
//     for (int i=0;i<matrix.size();i++){
//         for(int j=0; j<matrix[i].size(); j++){
//             matrix[i][matrix.size()-1-i] = copy[j][i];
//         }
//     }
//     return;
// }


void rotate(vector<vector<int>>& matrix) {
    int i=0;
    int j=0;
    int n = matrix.size();
    while(i<n && j <= n){
        if(j<n){
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
            j++;
       } else {
            i++;
            j=i+1;
       }
    }
    for(int i = 0; i < n; ++i){
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main(){
    vector<vector<int>> matrix = { {1,2,3},{4,5,6},{7,8,9} };
    rotate(matrix);
    for (int i=0;i<matrix.size();i++){
        for(int j=0; j<matrix[i].size(); j++){
            cout << matrix[i][j] << " ";
        }
        cout<<endl;
    }
    return 0;
}