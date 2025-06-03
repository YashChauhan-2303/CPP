//338. Counting Bits

#include<bits/stdc++.h>
using namespace std;

// vector<int> countBits(int n) {
//     vector<int> ans;
//     for(int i=0; i<=n; i++){
//         int x = i;
//         int count = 0;
//         while(x>0){
//             if(x%2!=0){
//                 count++;
//             }
//             x /= 2;
//         }
//         ans.push_back(count);
//     }
//     return ans;
// }

vector<int> countBits(int n) {
    vector<int> bits(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        bits[i] = bits[i >> 1] + (i & 1);
    }
    return bits;
}


int main(){
    int n = 5;
    vector<int> ans = countBits(n);
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}