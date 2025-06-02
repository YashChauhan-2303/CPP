//8. String to Integer (atoi)

#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

int myAtoi(string s) {
    int i=0;
    while(i<s.size() && s[i]== ' ') i++;
    int sign =1;
    if(i<s.size() && (s[i]=='+' || s[i]=='-')){
        sign = (s[i]=='+')? 1:-1;
        i++;
    }
    long long number=0;
    while(i<s.size() && isdigit(s[i])){
        number = number * 10 + (s[i]-'0');
        if (sign * number > INT_MAX) return INT_MAX;
        if (sign * number < INT_MIN) return INT_MIN;
        i++;
    }
    return static_cast<int>(sign*number);
}

int main(){
    string s = "-91283472332";
    cout << myAtoi(s);
    return 0;
}
