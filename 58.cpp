//58. Length of Last Word

#include<bits/stdc++.h>
using namespace std;

int lengthOfLastWord(string s) {
    int n = s.size();
    int j = n-1;
    int count = 0;
    while(j>=0 && s[j] == ' '){
        j--;
    }
    while(j>=0 && s[j] != ' '){
        count++;
        j--;
    }  
    return count;      
}

int main(){
    string s = "a";
    cout << lengthOfLastWord(s);
    return 0;
}