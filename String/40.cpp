//40. Combination Sum-2

#include<bits/stdc++.h>
using namespace std;

// vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
//     int n = candidates.size();
//     int noOfSubset = 1<<n;
//     set<vector<int>> ans;
//     for(int i=0; i<noOfSubset; i++){
//         int x = i;
//         vector<int> subset;
//         int sum = 0;
//         for(int j=0; j<n; j++){
//             if(x%2==1){
//                 sum += candidates[j];
//                 subset.push_back(candidates[j]);
//             }
//             x /= 2;
//         }
//         if(sum == target) {
//             sort(subset.begin(), subset.end());
//             ans.insert(subset);
//         }
//     }
//     return vector<vector<int>>(ans.begin(), ans.end());
// }

void generator(vector<vector<int>>& res, vector<int>& candidates, int start, int target, vector<int>& path) {
    if (target == 0) {
        res.push_back(path);
        return;
    }

    for (int i = start; i < candidates.size(); ++i) {
        if (i > start && candidates[i] == candidates[i - 1]) continue;  
        if (candidates[i] > target) break;  
        path.push_back(candidates[i]);
        generator(res, candidates, i + 1, target - candidates[i], path);  
        path.pop_back();
    }
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    vector<vector<int>> res;
    vector<int> path;
    sort(candidates.begin(), candidates.end());  // sort for deduplication
    generator(res, candidates, 0, target, path);
    return res;
}

int main(){
    vector<int> candidates = { 10,1,2,7,6,1,5 };
    int target = 8;
    vector<vector<int>> p = combinationSum2(candidates, target);
    for(int i=0; i<p.size(); i++){
        for(int j=0; j<p[i].size(); j++){
            cout << p[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}