//560. Subarray Sum Equals K

#include<bits/stdc++.h>
using namespace std;

// int subarraySum(vector<int>& nums, int k) {
//     int count = 0;
//     int n = nums.size();
//     int sum = 0;
//     for(int i=0;i<n;i++){
//         sum=0;
//         for(int j=i;j<n;j++){
//             sum += nums[j];
//             if(sum == k){
//                 count ++;
//             }
//         }
//     }
//     return count;
// }

int subarraySum(vector<int>& nums, int k) {
    int count = 0;
    int sum =0;
    int n = nums.size();
    unordered_map<int,int> map;
    map[0]={1};
    for(int i=0;i<n;i++){
        sum+=nums[i];
        if(map.find(sum-k) != map.end()){
            count += map[sum-k];
        }
        map[sum]++;
    }
    return count;
}

int main(){
    vector<int> nums = { 6,4,3,1 };
    int k = 10;
    cout << subarraySum(nums,k);
    return 0;
}