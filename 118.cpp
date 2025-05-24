//118. Pascal's Triangle

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> ans;
    vector<int> row;
    int k=0;
    for(int i=0;i<numRows; i++){
        row={};
        for( int j=0; j<=i; j++){
            if(i==0 || j==0 || j==i){
                row.push_back(1);
            } else {
                row.push_back(ans[k-1][j-1]+ans[k-1][j]);
            }
        }
        ans.push_back(row);
        k++;
    }       
    return ans; 
}

int main(){
    int numRows = 5;
    vector<vector<int>> matrix = generate(numRows);
    for (int i=0;i<matrix.size();i++){
        for(int j=0; j<matrix[i].size(); j++){
            cout << matrix[i][j] << " ";
        }
        cout<<endl;
    }
    return 0;
}