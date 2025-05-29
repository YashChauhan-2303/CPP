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
    int i=1, j=max;
    while(i<=j){
        int mid = i + (j-i)/2;
        int hours = checkSpeed(piles,mid);
        if(hours == h) return mid;
        else if ( hours > h) i = mid+1;
        else j = mid-1;
    }
    return -1;
}

int main(){
    vector<int> piles = { 3,6,7,11 };
    int h=8;
    cout << minEatingSpeed(piles,h);
    return 0;
}