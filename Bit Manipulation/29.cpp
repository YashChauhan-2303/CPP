//29. Divide Two Integers

#include<bits/stdc++.h>
using namespace std;

// int divide(int dividend, int divisor) {
//         // Handle overflow edge case
//         if (dividend == INT_MIN && divisor == -1)
//             return INT_MAX;

//         // Convert to long to avoid overflow, and take absolute values
//         long long a = abs((long long)dividend);
//         long long b = abs((long long)divisor);
//         long long result = 0;

//         while (a >= b) {
//             long long temp = b, multiple = 1;
//             while (a >= (temp << 1)) {
//                 temp <<= 1;
//                 multiple <<= 1;
//             }
//             a -= temp;
//             result += multiple;
//         }

//         // Apply sign
//         return ((dividend < 0) ^ (divisor < 0)) ? -result : result;
//     }

int divide(int dividend, int divisor) {
    if (dividend == INT_MIN && divisor == -1) return INT_MAX;
    int ans = 0;
    long long absDividend = abs((long long)dividend), absDivisor = abs((long long)divisor);
    while(absDividend >= absDivisor){
        int n = 0;
        while(absDividend>=(absDivisor << (n + 1))) n++;
        ans += 1LL<<n;
        absDividend -= absDivisor*(1LL<<n);
    }     
    return (int)(((dividend < 0) ^ (divisor < 0)) ? -(long long)ans : ans);
}

int main(){
    int dividend = 10;
    int divisor = 3;
    cout << divide(dividend, divisor);
    return 0;
}