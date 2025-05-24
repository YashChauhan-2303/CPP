//229. Majority Element II

#include<bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int>& nums) {
    vector<int> ans;
    unordered_map<int,int> mapp;
    int n= nums.size();
    for(int i=0; i<n; i++){
        mapp[nums[i]] +=1;
    }
    for( auto& pair : mapp){
        if(pair.second > n/3){
            ans.push_back(pair.first);
        }
    }
    return ans;
}

int main(){
    vector<int> nums = { 3,2,3 };
    vector<int> ans = majorityElement(nums);
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}
