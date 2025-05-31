//205. Isomorphic Strings

#include<bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t) {
    unordered_map<char,char> m1,m2;
    int i=0,j=0;
    while(i<s.size() && j<t.size()){
        char a = s[i], b = t[j];
        if((m1.count(a) && m1[a]!=b) || (m2.count(b) && m2[b]!=a)){
            return false;
        } 
        m1[a]=b;
        m2[b]=a;
        i++;
        j++;
    }
    return true;
}

int main(){
    string s = "egg", t = "add";
    cout << isIsomorphic(s,t);
    return 0;
}