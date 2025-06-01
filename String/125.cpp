//125. Valid Palindrome

#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    string s1;
    for(int i=0; i<s.size(); i++){
        if(isalnum(s[i])) s1+= tolower(s[i]);
    }
    string s2;
    for(int i=s1.size()-1; i>=0; i--){
        s2 += s1[i];
    }
    return s1==s2;
}

int main(){
    string s = "0P";
    cout << isPalindrome(s);
    return 0;
}