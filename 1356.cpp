//1356. Sort Integers by The Number of 1 Bits

#include<bits/stdc++.h>
using namespace std;

vector<int> sortByBits(vector<int>& arr) {
    map<int,vector<int>> mp;
    vector<int> ans;
    int n = arr.size();
    int count = 0; 
    for (int i=0; i<n; i++){
        count=0;
        int x = arr[i];
        while(x>0){
            if(x%2==1) count++;
            x /= 2;
        }
        mp[count].push_back(arr[i]);
    }  
    for (auto& pair: mp){
        sort(pair.second.begin(), pair.second.end());
        for (int x : pair.second) {
            ans.push_back(x);
        }
    }    
    return ans;
}

int main(){
    vector<int> arr = { 0,1,2,3,4,5,6,7,8 };
    arr = sortByBits(arr);
    for (int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    return 0;
}