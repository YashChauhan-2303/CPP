//231. Power of Two

#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}

bool isPowerOfTwo(int n) {
    if(n<=0) return 0;
    int x = n;
    while(x%2==0){
        x /= 2;
    }
    if (x==1) return 1;
    return 0;
}

int main(){
    int n = 3;
    cout << isPowerOfTwo(n);
    return 0;
}