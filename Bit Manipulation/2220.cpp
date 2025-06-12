//2220. Minimum Bit Flips to Convert Number

#include<bits/stdc++.h>
using namespace std;

int minBitFlips(int start, int goal) {
    int n = 0;
    int count = 0;
    while (start != goal){
        if((start & (1<<n)) != (goal & (1<<n))) {
            start = start ^ (1<<n);
            count++;
        }
        n++;
    }
    return count;
}

int main(){
    int start = 3;
    int goal = 4;
    cout << minBitFlips(start,goal);
    return 0;
}