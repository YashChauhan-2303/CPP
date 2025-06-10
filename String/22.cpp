//22. Generate Parentheses

#include<bits/stdc++.h>
using namespace std;

void generator(vector<string> &p, int oc, int cc, int n, string s){
    if(oc==n && cc==n) {
        p.push_back(s);
        return;
    }
    if(oc < n) {
        generator(p,oc+1,cc,n,s+"(");
    }
    if (cc<oc) {
        generator(p,oc,cc+1,n,s+")");
    }
}

vector<string> generateParenthesis(int n) {
    vector<string> p = {};
    int oc = 0, cc=0;
    string s;
    generator(p,oc,cc,n,s);
    return p;
}

int main(){
    int n = 3;
    vector<string> p = generateParenthesis(n);
    for(int i=0; i<p.size(); i++){
        cout << p[i] << endl;
    }
    return 0;
}

