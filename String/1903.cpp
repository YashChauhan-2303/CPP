//1903. Largest Odd Number in String

#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

string largestOddNumber(string num) {
    for(int i=num.size()-1; i>=0; i--){
        if ((num[i]-'0')%2==1){
            return num.substr(0,i+1);
        }
    }
    return "";
}   

int main(){
    string num = "52";
    cout << largestOddNumber(num);
    return 0;
}