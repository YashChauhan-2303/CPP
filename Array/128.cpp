//128. Longest Consecutive Sequence

#include<bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& nums) {
    int n = nums.size();
    if (n==0) return 0;
    int longest = 1;
    int counting=0;
    unordered_set<int> sett(nums.begin(), nums.end());
    for(int num : sett){
        counting=0;
        if( sett.count(num-1) == 0){
            counting ++;
            int x = num;
            while(sett.count(x+1) != 0){
                counting++;
                x++;
            }
            longest = max (longest,counting);
        }   
    }
    return longest;
}

int main(){
    vector<int> nums = { 0,3,7,2,5,8,4,6,0,1 };
    cout << longestConsecutive(nums);
    return 0;
}