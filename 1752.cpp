//1752. Check if Array Is Sorted and Rotated

#include<bits/stdc++.h>
using namespace std;

bool check(vector<int>& nums) {
    int count = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        if (nums[i] > nums[(i + 1) % n])
            count++;
    }
    return count <= 1;
    }

int main(){
    vector<int> nums;
    nums = {6,10,6};
    bool a = check(nums);
    cout <<a;
    return 0;
}