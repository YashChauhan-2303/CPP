//523. Continuous Subarray Sum

#include<bits/stdc++.h>
using namespace std;

bool checkSubarraySum(vector<int>& nums, int k) {
    int n = nums.size();
    int sum = 0;
    unordered_map<int,int> map;
    map[0] = -1;
    for(int i = 0; i<n ; i++){
        sum+=nums[i];
        int mod = (k==0)? sum:sum%k;
        if(map.find(mod) != map.end()){
            if (i - map[mod] >= 2) {
                return true;
            }
        } else {
            map[mod] = i;
        }
    }
    return false;
}

int main(){
    vector<int> nums = { 5,0,0,0 };
    int k = 3;
    cout << checkSubarraySum(nums,k);
    return 0;
}