//1295. Find Numbers with Even Number of Digits

#include<bits/stdc++.h>
using namespace std;

int findNumbers(vector<int>& nums) {
    int n = nums.size();
    int dig = 0;
    int count = 0;
    for(int i=0; i<n; i++){
        dig=0;
        int num = nums[i];
        while(num>0){
            dig++;
            num /= 10;
        }
        if (dig%2==0) count++;
    }
    return count;
}

int main(){
    vector<int> nums = { 12,345,2,6,7896 };
    cout << findNumbers(nums);
    return 0;
}