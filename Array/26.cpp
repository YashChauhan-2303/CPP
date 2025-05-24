//26. Remove Duplicates from Sorted Array

#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    vector<int> arr;
    arr.push_back(nums[0]);
    int j=0;
    for(int i=1;i<nums.size();i++){
        if(arr[j]<nums[i]){
            arr.push_back(nums[i]);
            j++;
        }
    }        
    for(int i=0;i<arr.size();i++){
        nums[i]=arr[i];
    }
    return j+1;
}

int main(){
    vector<int> nums;
    nums = {1,1,2};
    cout << removeDuplicates(nums);
    return 0;
}