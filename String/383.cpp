//383. Ransom Note

#include<bits/stdc++.h>
using namespace std;

// bool canConstruct(string ransomNote, string magazine) {
//     if(ransomNote.size() > magazine.size()) return 0;
//     string r = ransomNote;
//     string m = magazine;
//     sort(r.begin(), r.end());
//     sort(m.begin(), m.end());
//     int i=0, j=0;
//     while( i<r.size() && j<m.size()){
//         if(r[i]!=m[j]){
//             j++;
            
//         } else {
//             i++;
//             j++;
//         }
//     }
//     return i == r.size();
// }

bool canConstruct(string ransomNote, string magazine) {
    if (ransomNote.size() > magazine.size()) return false;
    
    vector<int> counts(26, 0);
    for (char c : magazine) counts[c - 'a']++;
    for (char c : ransomNote) {
        if (--counts[c - 'a'] < 0) return false;
    }
    return true;
}

int main(){
    string ransomNote = "bg", magazine = "efjbdfbdgfjhhaiigfhbaejahgfbbgbjagbddfgdiaigdadhcfcj";
    cout << canConstruct(ransomNote, magazine);
    return 0;
}
