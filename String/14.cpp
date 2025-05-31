// /14. Longest Common Prefix

#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    string common = strs[0];
    for(int i=1; i<strs.size(); i++){
        int j=0;
        while(j<strs[i].size() && common[j]==strs[i][j]){
            j++;
        }
        common = strs[i].substr(0,j);
    }      
    return common;
}

int main(){
    vector<string> strs = {"flower","flow","flight"};
    cout << longestCommonPrefix(strs);
    return 0;   
}