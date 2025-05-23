//121. Best Time to Buy and Sell Stock

#include<bits/stdc++.h>
using namespace std;

//Brute-force
// int maxProfit(vector<int>& prices) {
//     int n=prices.size();
//     int profit=0;
//     for( int i=0; i<n; i++){
//         for( int j=i+1; j<n; j++){
//             if(prices[j]-prices[i]>0){
//                 if(prices[j]-prices[i]>profit){
//                     profit = prices[j]-prices[i];
//                 }
//             }
//         }
//     }
//     return profit;
// }

int maxProfit(vector<int>& prices) {
    int n=prices.size();
    int profit=0;
    int mini=prices[0];
    int cost=0;
    for( int i=1; i<n; i++){
        cost = prices[i] - mini;
        profit = max(profit, cost);
        mini = min(mini,prices[i]);
    }
    return profit;
}

int main(){
    vector<int> nums = { 7,1,5,3,6,4 };
    cout << maxProfit(nums);
    return 0;
}