//451. Sort Characters By Frequency

#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

static bool compare(pair<char, int>& a, pair<char, int>& b) {
    return a.second > b.second;
}

string frequencySort(string s) {
    map<char,int> mp;
    for(int i=0; i<s.size(); i++) mp[s[i]] +=1;
    vector<pair<char, int>> freqVec(mp.begin(), mp.end());
    sort(freqVec.begin(), freqVec.end(), compare);
    string ans ;
    for(auto& pair: freqVec) {
        while(pair.second>0){
            ans += pair.first;
            pair.second--;
        }
        // ans += string(pair.second, pair.first); 
        //this is same as while loop
    }
    return ans;
}

int main(){
    string s = "Aabb";
    cout << frequencySort(s);
    return 0;   
}