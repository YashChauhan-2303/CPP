//1. Two Sum

#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> arr;
    int n = nums.size();
    int sum=0;
    unordered_map<int,int> map;
    for(int i=0; i<n; i++){
        sum+=nums[i];
        if(map.find(target-sum) != map.end()){
            arr.push_back(map[target-sum]);
            arr.push_back(i);
            break;
        } else {
            sum-=nums[i];
        }
        map[nums[i]]=i;
    }
    return arr;
}

// vector<int> twoSum(vector<int>& nums, int target) {
//     vector<int> arr;
//     int n = nums.size();
//     for(int i = 0 ; i< n ; i++){
//         for( int j=i+1; j<n ; j++){
//             if (nums[i] + nums[j] == target){
//                 arr.push_back(i);
//                 arr.push_back(j);
//             }
//         }

//     }
//     return arr;
// }

int main(){
    vector<int> nums = { 3,2,4 };
    int target = 6;
    vector<int> arr = twoSum(nums,target);
    for(int i = 0; i<arr.size(); i++){
        cout << arr[i] << " "; 
    }
    return 0;
}