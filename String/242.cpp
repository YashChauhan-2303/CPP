//242. Valid Anagram

#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

// bool isAnagram(string s, string t) {
//     if(s.size() != t.size()) return false;
//     vector<char> arr;
//     for(int i=0; i<s.size(); i++){
//         arr.push_back(s[i]);
//     }
//     for(int i=0; i<t.size(); i++){
//         auto it = find(arr.begin(), arr.end(), t[i]);   
//         if(it != arr.end()) arr.erase(it);
//         else return false;
//     }
//     return true;
// }   

// bool isAnagram(string s, string t) {
//     if (s.size() != t.size()) return false;

//     vector<int> count(26, 0); // for lowercase letters only

//     for (int i = 0; i < s.size(); i++) {
//         count[s[i] - 'a']++;
//         count[t[i] - 'a']--;
//     }

//     for (int c : count) {
//         if (c != 0) return false;
//     }

//     return true;
// }

bool isAnagram(string s, string t) {
    if (s.size() != t.size()) return false;

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    return s == t;
}


int main(){
    string s = "anagram", t = "nagaram";
    cout << isAnagram(s,t);
    return 0;
}