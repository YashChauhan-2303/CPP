//7. Reverse Integer

#include<bits/stdc++.h>
using namespace std;

int reverse(int x) {
    long num = x;
    int sign = 1;
    if (num<0){
        sign = -1;
        num = num*-1;
    }        
    long revnum =0;
    while(num>0){
        int dig = num%10;
        revnum = revnum*10 + dig;
        num /= 10;
    }
    revnum *= sign;
    if (revnum > INT_MAX || revnum < INT_MIN) return 0;
    return revnum ;
}

int main(){
    int x = 1534236469;
    cout << reverse(x);
    return 0;
}