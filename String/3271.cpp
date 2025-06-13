//3271. Hash Divided String

#include<bits/stdc++.h>
using namespace std;

string stringHash(string s, int k) {
    int n = s.size();
    string ans;
    int sum=0;
    int count = 1;
    for(auto c: s){
        sum += (c-'a');
        if(count==k){
            sum = sum % 26;
            ans += char('a'+sum);
            count=1;
            sum=0;
            continue;
        }
        count++;
    }
    return ans;
}

int main(){
    string s = "mxz";
    int k = 3;
    cout << stringHash(s,k);
    return 0;
}