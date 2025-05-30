//917. Reverse Only Letters

#include<bits/stdc++.h>
using namespace std;

string reverseOnlyLetters(string s) {
    int n = s.size();
    int i=0, j=s.size()-1;
    while(i<j){
        while(i<n && !isalpha(s[i])) i++;
        while(j>0 && !isalpha(s[j]) ) j--;
        if(i<j){
            char temp = s[j];
            s[j] = s[i];
            s[i] = temp;
        }
        i++;
        j--;
    }
    return s;
}
int main(){
    string s = "?6C40E";
    cout << reverseOnlyLetters(s);
    return 0;
}