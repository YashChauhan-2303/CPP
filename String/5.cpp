//5. Longest Palindromic Substring

#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

// bool isPalindrome(const string& s, int left, int right) {
//     while (left < right) {
//         if (s[left++] != s[right--]) return false;
//     }
//     return true;
// }

// string longestPalindrome(string s) {
//     if(s.size() == 1) return s;
//     int maxLen = 1;
//     int start = 0;

//     for (int i = 0; i < s.size(); i++) {
//         for (int j = i; j < s.size(); j++) {
//             if (isPalindrome(s, i, j) && (j - i + 1 > maxLen)) {
//                 start = i;
//                 maxLen = j - i + 1;
//             }
//         }
//     }

//     return s.substr(start, maxLen);
// }

void expandAroundCenter(const string& s, int left, int right, int& start, int& maxLen) {
    while (left >= 0 && right < (int)s.size() && s[left] == s[right]) {
        left--;
        right++;
    }
    int len = right - left - 1;
    if (len > maxLen) {
        maxLen = len;
        start = left + 1;
    }
}

string longestPalindrome(string s) {
    if (s.size() <= 1) return s;

    int start = 0, maxLen = 1;

    for (int i = 0; i < (int)s.size(); i++) {
        expandAroundCenter(s, i, i, start, maxLen);     // odd length palindrome
        expandAroundCenter(s, i, i + 1, start, maxLen); // even length palindrome
    }

    return s.substr(start, maxLen);
}


int main(){
    string s = "cbbd";
    cout << longestPalindrome(s);
    return 0;
}
