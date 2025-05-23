//3151. Special Array I

#include<bits/stdc++.h>
using namespace std;

bool isArraySpecial(vector<int>& nums) {
    bool ans = true;
    for(int i=0; i<nums.size()-1; i++){
        if (nums[i]%2==0){
            if(nums[i+1]%2==0){
                ans = false;
                break;
            }
        } else {
            if(nums[i+1]%2!=0){
                ans = false;
                break;
            }
        }
    }  
    return ans;
}

int main(){
    vector<int> nums = { 2,1,4 };
    cout << isArraySpecial(nums);
    return 0;
}