//78. Subsets

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> subsets(vector<int>& nums) {
    int n = nums.size();
    int numOfSubset = 1;
    while(n>0){
        numOfSubset *=2;
        n--;
    }
    n = nums.size();
    vector<vector<int>> ans;
    vector<int> subset;
    for(int i=0; i<numOfSubset; i++){
        int x = i;
        subset = {};
        for(int j=0; j<n; j++){
            if (x%2==1){
                subset.push_back(nums[j]);
            }
            x /= 2;
        }
        ans.push_back(subset);
    }
    return ans;
}

int main(){
    vector<int> nums = { 1,2,3 };
    vector<vector<int>> p = subsets(nums);
    for(int i=0; i<p.size(); i++){
        for(int j=0; j<p[i].size(); j++){
            cout << p[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}