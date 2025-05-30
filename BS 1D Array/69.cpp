//69. Sqrt(x)

#include<bits/stdc++.h>
using namespace std;

int mySqrt(int x) {
    int i=0, j=x;
    int ans = -1;
    while(i<=j){
        int mid = i + (j-i)/2;
        if ( 1LL*mid*mid == 1LL*x) return mid;
        if ( 1LL*mid*mid < 1LL*x) {
            ans = mid;
            i=mid+1;
        } else j=mid-1;
    }
    return ans;
}

int main(){
    int x = 8;
    cout << mySqrt(x);
    return 0;
}