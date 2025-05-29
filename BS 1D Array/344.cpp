//344. Reverse String

#include<bits/stdc++.h>
using namespace std;

void reverseString(vector<char>& s) {
    int i=0, j=s.size()-1;
    while(i<j){
        char c = s[j];
        s[j]=s[i];
        s[i]= c;
        i++;
        j--;
    }
    return;
}

int main(){
    vector<char> s = { 'H','a','n','n','a','h' };
    reverseString(s);
    for(int i=0; i<s.size(); i++){
        cout << s[i] << " ";
    }
    return 0;
}