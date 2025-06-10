//39. Combination Sum

#include<bits/stdc++.h>
using namespace std;

void generator(vector<vector<int>>& g, vector<int>& candidates,int i, int sum, int target, vector<int>& ds){
    if(i>=candidates.size() || sum>target) return;
    if(sum == target) {
        g.push_back(ds);
        return;
    }
    generator(g,candidates,i+1,sum,target,ds);
    sum += candidates[i];
    ds.push_back(candidates[i]);
    generator(g,candidates,i,sum,target,ds);
    ds.pop_back();
}


vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> g;
    vector<int> ds;
    generator(g,candidates,0,0,target,ds);
    return g;
}

int main(){
    vector<int> candidates = { 2,3,6,7 };
    int target = 7;
    vector<vector<int>> p = combinationSum(candidates, target);
    for(int i=0; i<p.size(); i++){
        for(int j=0; j<p[i].size(); j++){
            cout << p[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}