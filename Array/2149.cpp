//2149. Rearrange Array Elements by Sign

#include<bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    int n = nums.size();
    int posi=0,negi=1;
    vector<int> ans(n,0);
    for(int i=0; i<n ; i++){
        if (nums[i]>0){
            ans[posi] = nums[i];
            posi += 2;
        } else {
            ans[negi] = nums[i];
            negi +=2;
        }
    }
    return ans;
}

//brute force
// vector<int> rearrangeArray(vector<int>& nums) {
//     vector<int> posi;
//     vector<int> negi;
//     int n = nums.size();
//     for(int i=0;i<n;i++){
//         if (nums[i]>0) posi.push_back(nums[i]);
//         else negi.push_back(nums[i]);
//     }
//     int j=0,k=0;
//     for(int i=0;i<n;i++){
//         if (i%2==0) {
//             nums[i]=posi[j];
//             j++;
//         }
//         else {
//             nums[i]=negi[k];
//             k++;
//         }
//     }
//     return nums;
// }

int main(){
    vector<int> nums = { 28,-41,22,-8,-37,46,35,-9,18,-6,19,-26,-37,-10,-9,15,14,31 };
    nums = rearrangeArray(nums);
    for(int i = 0; i<nums.size(); i++){
        cout << nums[i] << " "; 
    }
}