//189. Rotate Array

#include<bits/stdc++.h>
using namespace std;

// void rotate(vector<int>& nums, int k) {
//     int n = nums.size();
//     k = k%n;
//     reverse(nums.begin(), nums.end());
//     reverse(nums.begin(), nums.begin() + k);
//     reverse(nums.begin() + k, nums.end());
// }

// what this does - first rev => [7,6,5,4,3,2,1]
// second rev => [5,6,7,4,3,2,1]
// third rev => [5,6,7,1,2,3,4]



void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    vector<int> arr ;
    for(int i=0;i<k;i++){
        arr.push_back(nums[n-k+i]);
    }
    for(int i=n-1;i>0;i--){
        nums[i] = nums[i-k];
    }
    for(int i=0;i<k;i++){
        nums[i] = arr[i];
    }      
}

int main(){
    vector<int> nums = { 1,2,3,4,5,6,7 };
    int k = 3;
    rotate(nums, k);
    for(int i=0;i<nums.size();i++){
        cout << nums[i] <<" ";
    }
    return 0;
}