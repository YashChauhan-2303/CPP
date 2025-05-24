//169. Majority Element

#include<bits/stdc++.h>
using namespace std;

//Moore's Voting Algorithm
int majorityElement(vector<int>& nums) {
    int count =0;
    int j=0;
    int n = nums.size();
    int element = nums[0];
    while(j<n){
        if (element == nums[j]){
            count++;
        } else{
            count--;
        }
        j++;
        if (count==0){
            element=nums[j];
        }
    }
    return element;
}

// int majorityElement(vector<int>& nums) {
//     unordered_map<int,int> map;
//     for( int i=0 ; i< nums.size() ; i++){
//         map[nums[i]]++;
//     }
//     for(auto& pair : map){
//         if (pair.second > nums.size()/2){
//             return pair.first;
//         }
//     }
//     return -1;
// }

int main(){
    vector<int> nums = { 2,2,1,1,1,2,2 };
    cout << majorityElement(nums);
    return 0;
}