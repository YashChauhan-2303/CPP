//875. Koko Eating Bananas

#include<bits/stdc++.h>
using namespace std;

int checkSpeed(vector<int>& piles, int mid){
    int count=0;
    for(int i=0; i<piles.size(); i++){
        count += (piles[i] + mid - 1) / mid;
    }
    return count;
}

int minEatingSpeed(vector<int>& piles, int h) {
    int n= piles.size();
    int max= piles[0];
    for( int i=1; i<n; i++){
        if(piles[i]>max) max=piles[i];
    }
    int ans = max;
    int i=1, j=max;
    while(i<=j){
        int mid = i + (j-i)/2;
        int hours = checkSpeed(piles,mid);
        if(hours <= h) {
            ans = mid;
            j = mid - 1;
        }
        else i = mid + 1;
    }
    return ans;
}

int main(){
    vector<int> piles = { 312884470 };
    int h= 312884469;
    cout << minEatingSpeed(piles,h);
    return 0;
}