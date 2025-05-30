//1539. Kth Missing Positive Number

#include<bits/stdc++.h>
using namespace std;

int findKthPositive(vector<int>& arr, int k) {
    int i=0, j=arr.size()-1;
    while(i<=j){
        int mid = i + (j-i)/2;
        if (arr[mid]-(mid+1)<k) i=mid+1;
        else j=mid-1;
    }    
    if (j < 0) return k;
    k = k - (arr[j]-j-1);
    int ans  = arr[j];
    ans += k;
    return ans;
}

int main(){
    vector<int> arr = { 2 };
    int k = 1;
    cout << findKthPositive(arr,k);
    return 0;
}