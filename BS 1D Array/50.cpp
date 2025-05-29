//50. Pow(x, n)

#include<bits/stdc++.h>
using namespace std;

double myPow(double x, int n) {
    if (x==1) return 1;
    double ans = 1;
    long long pow = n; 
    if (pow < 0) {
        x = 1 / x;
        pow = -pow;
    }
    while(pow>0){
        if (pow % 2 == 1) {
            ans *= x;
        }
        x *= x;
        pow /= 2;
    }
    return ans;
}

int main(){
    double x = 2.00;
    int n = -2147483648;
    cout << myPow(x,n); 
    return 0;
}