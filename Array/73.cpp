//73. Set Matrix Zeroes

#include<bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    vector<int> row;
    vector<int> column;
    for (int i=0; i< matrix.size(); i++){
        for (int j=0; j<matrix[i].size(); j++){
            if(matrix[i][j]==0){
                row.push_back(i);
                column.push_back(j);
            }
        }
    }
    for(int i=0; i<row.size(); i++){
        for (int j=0; j<matrix[row[i]].size(); j++){
            matrix[row[i]][j] = 0;
        }
    }
    for(int i=0; i<column.size(); i++){
        for (int j=0; j<matrix.size(); j++){
            matrix[j][column[i]] = 0;
        }
    }
}

int main(){
    vector<vector<int>> matrix = { {1,1,1},{1,0,1},{1,1,1} };
    setZeroes(matrix);
    for (int i=0; i< matrix.size(); i++){
        for (int j=0; j<matrix[i].size(); j++){
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}