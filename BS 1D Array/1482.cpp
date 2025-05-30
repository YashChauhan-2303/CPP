//1482. Minimum Number of Days to Make m Bouquets

#include<bits/stdc++.h>
using namespace std;

int checkBloom(vector<int>& bloomDay, int mid, int k){
    int count = 0, flowers = 0;
    for (int i = 0; i < bloomDay.size(); i++) {
        if (bloomDay[i] <= mid) {
            flowers++;
            if (flowers == k) {
                count++;
                flowers = 0;
            }
        } else {
            flowers = 0;
        }
    }
    return count;
}

int minDays(vector<int>& bloomDay, int m, int k) {
    int n = bloomDay.size();
    if (n < 1LL*m*k) return -1;
    int min = bloomDay[0], max=bloomDay[0];
    for(int i=0; i<n; i++){
        if(bloomDay[i]>max) max = bloomDay[i];
        if (bloomDay[i] < min) min = bloomDay[i];
    }
    int ans = -1;
    while(min<=max){
        int mid = min + (max-min)/2;
        int x = checkBloom(bloomDay,mid,k);
        if (x >= m){
            ans = mid;
            max = mid - 1;
        } else min = mid + 1;
    }
    return ans;
}

int main(){
    vector<int> bloomDay = { 7,7,7,7,12,7,7 };
    int m =2;
    int k =3;
    cout << minDays(bloomDay, m, k);
    return 0;
}