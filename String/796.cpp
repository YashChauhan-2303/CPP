//796. Rotate String

#include<bits/stdc++.h>
using namespace std;

bool rotateString(string s, string goal) {
    if (s.size() != goal.size()) return false;
     for (int i = 0; i < goal.size(); i++) {
        if (goal[i] == s[0]) {
            string rotated = goal.substr(i) + goal.substr(0, i);
            if (rotated == s) return true;
        }
    }
    return false;
}

int main(){
    string s = "defdefdefabcabc", goal = "defdefabcabcdef";
    cout << rotateString(s,goal);
    return 0;
}