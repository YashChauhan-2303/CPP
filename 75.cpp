//75. Sort Colors

#include<bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums) {
    int n = nums.size();
    map<int,int> map;
    for(int i=0;i<n;i++){
        map[nums[i]]++;
    }
    vector<int> keys ;
    for(const auto& pair : map){
        keys.push_back(pair.first);
    }
    int j = keys.size();
    int i=0;
    int k=0;
    while (i<j){
        if(map[keys[i]]>0){
            nums[k]=keys[i];
            k++;
            map[keys[i]]--;
        } else {
            i++;
        }
    }
    
}

int main(){
    vector<int> nums = { 2,0,2,1,1,0 };
    sortColors(nums);
    for(int i = 0; i<nums.size(); i++){
        cout << nums[i] << " "; 
    }
    return 0;
}