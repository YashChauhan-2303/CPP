//3442. Maximum Difference Between Even and Odd Frequency I

#include<bits/stdc++.h>
using namespace std;

// int maxDifference(string s) {
//     map<char,int> mp;
//     for(int i=0; i<s.size(); i++){
//         mp[s[i]]++;
//     }     
//     vector<int> evenFreqs, oddFreqs;
//     for(auto& pair : mp) {
//         int frequency = pair.second;
//         if(frequency % 2 == 0) {
//             evenFreqs.push_back(frequency);
//         } else {
//             oddFreqs.push_back(frequency);
//         }
//     }
//     int maxDiff = 0;
//     for(int evenFreq : evenFreqs) {
//         for(int oddFreq : oddFreqs) {
//             maxDiff = max(maxDiff, abs(evenFreq - oddFreq));
//         }
//     }
    
//     return maxDiff;
// }

int maxDifference(string s) {
    vector<int> freq(26,0);
    int odd = INT_MIN, even = INT_MAX;
    for(auto c: s) freq[c-'a']++;
    for(int i=0; i<26; i++){
        if(freq[i]%2==1) odd = max(odd,freq[i]);
        else if (freq[i]!=0) even = min(even,freq[i]);
    }
    return odd - even;
}

int main(){
    string s = "";
    cout << maxDifference(s);
    return 0;
}