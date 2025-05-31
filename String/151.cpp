//151. Reverse Words in a String

#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
    int i=0;
    string word = "";
    vector<string> arr;
    while(i<=s.size()){
        if(isalnum(s[i]) && i<s.size()) word+=s[i];
        else {
            if(word != "") arr.push_back(word);
            word = "";
        }
        i++;
    }
    word = "";
    for(int i=arr.size()-1; i>=0; i--){
        if(i==0) word += arr[i];
        else word = word + arr[i] + " ";
    }
    return word;
}

int main(){
    string s = "EPY2giL";
    cout << reverseWords(s);
    return 0;
}