//1021. Remove Outermost Parentheses

#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

string removeOuterParentheses(string s) {
    int depth = 0;
    string ans = "";
    for( int i=0; i<s.size(); i++){
        if(s[i]=='('){
            if(depth>0) ans += s[i];
            depth++;
        } else {
            depth--;
            if(depth>0) ans += s[i];
        }
    }
    return ans;
}

int main(){
    string s = "(()())(())(()(()))";
    cout << removeOuterParentheses(s);
    return 0;
}