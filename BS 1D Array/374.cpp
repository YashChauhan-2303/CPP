//374. Guess Number Higher or Lower

#include<bits/stdc++.h>
using namespace std;

int guess(int num){
    int x = 6;
    if(num == x) return 0;
    else if (num < x) return 1;
    else return -1;
}

int guessNumber(int n) {
    int i=1, j=n;
    while(i<=j){
        int mid = i + (j-i)/2;
        int ans = guess(mid);
        if(ans == 0) return mid;
        else if (ans > 0) i=mid+1;
        else j=mid-1; 
    }
    return -1;
}

int main(){
    int n = 10;
    cout << guessNumber(n);
    return 0;
}