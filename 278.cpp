// 278. First Bad Version

#include<bits/stdc++.h>
using namespace std;

bool isBadVersion(int n){
    return n==4;
}

int firstBadVersion(int n) {
    int left=0;
    int right=n;
    while(left<=right){
        int mid = left + (right-left)/2;
        if(isBadVersion(mid)){
            if(!isBadVersion(mid-1)){
                return mid;
            }
            right = mid-1;
        } else { 
            left = mid+1;
        }
    }
    return -1;
}

int main(){
    int n =5;
    cout << firstBadVersion(n);
    return 0;
}