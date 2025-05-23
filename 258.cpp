//258. Add Digits

#include<bits/stdc++.h>
using namespace std;

int addDigits(int num) {
    int sum=0;
    while(num>0){
        int dig = num%10;
        sum += dig;
        num /= 10;
    }       
    return sum/10>=1 ? addDigits(sum) : sum; 
}

int main(){
    int num = 38;
    cout << addDigits(num);
    return 0;
}