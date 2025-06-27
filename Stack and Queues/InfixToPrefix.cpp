#include <bits/stdc++.h>
using namespace std;

string infToPre(string s){
    string ans;
    stack<char> st;
    for(auto c: s){
        if(isalnum(c)) st.push(c);
        else {
            ans += c;
        }
    }
    string numPart;
    while(!st.empty()){
        char c = st.top();
        numPart += c;
        st.pop();
    }
    reverse(numPart.begin(), numPart.end());
    ans = ans + numPart;
    return ans;
}

int main(){
    string s = "5+3";
    cout << infToPre(s);
    return 0;
}