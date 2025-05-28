//3560. Find Minimum Log Transportation Cost

#include<bits/stdc++.h>
using namespace std;

long long minCuttingCost(int n, int m, int k) {
    long long cost = 0;
    if (n-k > 0 || m-k > 0){
        if (n-k>m-k){
            if(m-k>0){
                cost = 1LL *(m-k)*k;
            } else {
                cost = 1LL *(n-k)*k;
            }
        } else {
            if(n-k>0){
                cost = 1LL *(n-k)*k;
            } else {
                cost = 1LL *(m-k)*k;
            }            
        }
    } 
    return cost;
}

int main(){
    int n = 4;
    int m = 4;
    int k = 6;
    cout << minCuttingCost(n,m,k);
    return 0;
}