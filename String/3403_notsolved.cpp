//3403. Find the Lexicographically Largest String From the Box I

#include<bits/stdc++.h>
using namespace std;

// string answerString(string word, int numFriends) {
//     int n = word.size();
//     int len = n - numFriends + 1;
//     string maxStr = "";
//     for (int i = 0; i <= n - len; ++i) {
//         string curr = word.substr(i, len);
//         if (curr > maxStr)
//             maxStr = curr;
//     }
//     return maxStr;
// }

// string answerString(string word, int numFriends) {
//     int i=0;
//     int n = word.size();
//     string max = "";
//     int len = n - numFriends + 1;
//     while(i <= n - len){
//         if(word.substr(i,len) > max) max = word.substr(i,len);
//         i++;
//     }
//     return max;
// }

int main(){
    string word = "naan";
    int numFriends = 2;
    sort(word.begin(),word.end());
    cout << word;
    // cout << answerString(word, numFriends);
    return 0;
}