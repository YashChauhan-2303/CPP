//283. Move Zeroes

#include<bits/stdc++.h>
using namespace std;

// void moveZeroes(vector<int>& nums) {
//     return ;
// }

void moveZeroes(vector<int>& nums) {
    int i=0;
    int j=0;
    int n = nums.size();
    while(i<n && j<n){
        while(i<n){
            if (nums[i] != 0) {
                i++;
            } else {
                break;
            } 
        }
        while(j<n){
            if (nums[j] == 0) {
                j++;
            } else {
                break;
            }
        }
        if (i<j && i<n && j<n){
            int temp = nums[j];
            nums[j]=nums[i];
            nums[i]=temp;
        }
        j++;
    }      
    return ;
}

// DOESNT WORK FOR [1,0,1]

int main(){
    vector<int> nums = { 1,0,1 };
    moveZeroes(nums);
    for(int i=0;i<nums.size();i++){
        cout << nums[i] <<" ";
    }
    return 0;
}