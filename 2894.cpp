//2894. Divisible and Non-divisible Sums Difference

#include<bits/stdc++.h>
using namespace std;

int differenceOfSums(int n, int m) {
    int sum1 =0;
    int sum2 =0;
    for(int i=1;i<=n;i++){
        if(i%m==0){
            sum1 += i;
        } else {
            sum2 += i;
        }
    }
    return sum2-sum1;
}

int main(){
    int n = 10;
    int m = 3;
    cout << differenceOfSums(n,m);
    return 0;
}