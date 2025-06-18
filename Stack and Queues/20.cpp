//20. Valid Parentheses

#include <bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    stack<char> st;
    for(auto c:s){
        if(c=='(' || c=='[' || c=='{') {
            st.push(c);
        }
        if(c==')' || c==']' || c=='}'){
            if(st.empty()) return false;
            char top = st.top();
            if(c == ')' && top != '(') return false;
            if(c == ']' && top != '[') return false;
            if(c == '}' && top != '{') return false;
            st.pop();
        }
    }
    return st.empty()==1?1:0;
}

int main(){
    string s = "()[]{}";
    cout << isValid(s);
    return 0;
}