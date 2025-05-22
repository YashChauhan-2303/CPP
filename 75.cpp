//75. Sort Colors

#include<bits/stdc++.h>
using namespace std;

// void sortColors(vector<int>& nums) {
//     int n = nums.size();
//     map<int,int> map;
//     for(int i=0;i<n;i++){
//         map[nums[i]]++;
//     }
//     vector<int> keys ;
//     for(const auto& pair : map){
//         keys.push_back(pair.first);
//     }
//     int j = keys.size();
//     int i=0;
//     int k=0;
//     while (i<j){
//         if(map[keys[i]]>0){
//             nums[k]=keys[i];
//             k++;
//             map[keys[i]]--;
//         } else {
//             i++;
//         }
//     } 
// }

void sortColors(vector<int>& nums) {
    int low=0,mid=0,high=nums.size()-1;
    while(mid<=high){
        if(nums[mid]==0){
            int temp = nums[mid];
            nums[mid]=nums[low];
            nums[low]=temp;
            low++;
            mid++;
        } else if (nums[mid]==1){
            mid++;
        } else {
            int temp = nums[mid];
            nums[mid]=nums[high];
            nums[high]=temp;
            high--;
        }
    } 
}

int main(){
    vector<int> nums = { 1,2,0 };
    sortColors(nums);
    for(int i = 0; i<nums.size(); i++){
        cout << nums[i] << " "; 
    }
    return 0;
}