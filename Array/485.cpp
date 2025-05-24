//485. Max Consecutive Ones

#include<bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int j=0;
    int max=0;
    int n=nums.size();
    for(int i=0;i<n;i++){
        if(nums[i]==1){
            j++;
        }
        if(i==n-1 || nums[i]==0){
            if(max < j){
                max=j;
            }
            j=0;
        }
    }
    return max;
}

int main(){
    vector<int> nums = { 1,1,0,1,1,1 };
    cout << findMaxConsecutiveOnes(nums);
    return 0;
}