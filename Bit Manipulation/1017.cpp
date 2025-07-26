//1017. Convert to Base -2

#include<bits/stdc++.h>
using namespace std;

string baseNeg2(int n) {
    string ans;
    while(abs(n) > 0){
        if(n%(2) == 0){
            ans.push_back('0');
        } else {
            ans.push_back('1');
        }
        n = -(n>>1);
    }
    reverse(ans.begin(),ans.end());
    return ans.empty()?"0":ans; 
}

int main(){
    int n = 3;
    cout << baseNeg2(n) << endl;
    return 0;
}
