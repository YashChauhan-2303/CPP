//9. Palindrome Number

#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
    if (x<0){
        return false;
    }        
    int num = x;
    long int revnum =0;
    while(num>0){
        int dig = num%10;
        revnum = revnum*10 + dig;
        num /= 10;
    }
    return revnum == x;
}

int main(){
    int x = 1234567899;
    cout << isPalindrome(x);
    return 0;
}