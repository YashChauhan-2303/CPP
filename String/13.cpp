//13. Roman to Integer

#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

int romanToInt(string s) {
    unordered_map<char,int> arr;
    arr = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
    int value = 0;
    for(int i = 0; i <s.size(); i++){
        if (i + 1 < s.size() && arr[s[i]] < arr[s[i+1]]) {
            value -= arr[s[i]];
        } else {
            value += arr[s[i]];
        }
    }
    return value;
}

int main(){
    string s = "IV";
    cout << romanToInt(s);
    return 0;
}
