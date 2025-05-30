//1011. Capacity To Ship Packages Within D Days

#include<bits/stdc++.h>
using namespace std;

int checkDays(vector<int>& nums, int mid){
    int sum=0;
    int count=1;
    for(int i=0; i<nums.size(); i++){
        if (nums[i]+sum <= mid) sum += nums[i];
        else {
            sum  = nums[i];
            count ++;
        }
    }
    return count;
}

int shipWithinDays(vector<int>& weights, int days) {
    int n = weights.size();
    int sum = 0, max=weights[0];;
    for(int i=0; i<n; i++){
        if(max<=weights[i]) max = weights[i];
        sum += weights[i];
    }
    int i=max, j=sum;
    int ans = -1;
    while(i<=j){
        int mid = i + (j-i)/2;
        int x = checkDays(weights,mid);
        if (x<=days){
            ans = mid;
            j = mid-1;
        } else i=mid+1;
    }
    return ans;
}

int main(){
    vector<int> weights = { 1,2,3,4,5,6,7,8,9,10 };
    int days = 5;
    cout << shipWithinDays(weights,days);   
    return 0;
}