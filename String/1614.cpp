//1614. Maximum Nesting Depth of the Parentheses

#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

int maxDepth(string s) {
    int depth=0;
    int max = 0;
    for(auto c: s){
        if (c=='('){
            depth++;
            if(max < depth) max = depth;
        } else if(c==')'){
            depth --;
        }
    }
    return max;
}

int main(){
    string s = "1";
    cout << maxDepth(s);
    return 0;
}