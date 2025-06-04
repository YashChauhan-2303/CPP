//476. Number Complement
//1009. Complement of Base 10 Integer

#include<bits/stdc++.h>
using namespace std;

int findComplement(int num) {
    if (num == 0) return 1;
    int n=num;
    int ans = 0;
    long long power = 1;
    while(n>0){
        if(n%2==0){
            ans += 1*power;
        } else {
            ans += 0*power;
        }
        n /= 2;
        power *=2;
    }
    return ans;
}

int main(){
    int num = 5;
    cout << findComplement(num);
    return 0;
}