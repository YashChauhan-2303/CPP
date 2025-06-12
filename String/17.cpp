//17. Letter Combinations of a Phone Number

#include<bits/stdc++.h>
using namespace std;

void generator(vector<string>& ans, vector<char> digs ,int start, string s, string digits, unordered_map<int,vector<char>> mp){
    if(digits.size()==s.size()){
        ans.push_back(s);
        return;
    }
    for( int i=start; i<digs.size(); i++){
        generator(ans,digs,i+1,s,digits);
        s += to_string(mp[digs[i]]);
        generator(ans,digs,i+1,s,digits);
    }
}

vector<string> letterCombinations(string digits) {
    unordered_map<int,vector<char>> mp;
    mp[2]={'a','b','c'};
    mp[3]={'d','e','f'};
    mp[4]={'g','h','i'};
    mp[5]={'j','k','l'};
    mp[6]={'m','n','o'};
    mp[7]={'p','q','r','s'};
    mp[8]={'t','u','v'};
    mp[9]={'w','x','y','z'};
    vector<char> dig;
    for(auto c: digits) dig.push_back(c);

}

int main(){
    string digits = "";
    vector<string> ans = letterCombinations(digits);
    for(auto x: ans){
        cout << x << " ";
    }
    return 0;
}