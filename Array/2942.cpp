//2942. Find Words Containing Character

#include<bits/stdc++.h>
using namespace std;

vector<int> findWordsContaining(vector<string>& words, char x) {
    vector<int> ans;
    for( int i=0; i<words.size(); i++){
        for(int j=0; j<words[i].size(); j++){
            if(words[i][j]==x){
                ans.push_back(i);
                break;
            }
        }
    }        
    return ans;
}

// vector<int> findWordsContaining(vector<string>& words, char x) {
//     vector<int> ans;
//     for (int i = 0; i < words.size(); i++) {
//         if (words[i].find(x) != string::npos) {
//             ans.push_back(i);
//         }
//     }
//     return ans;
// }


int main(){
    vector<string> words = { "leet","code" };
    char x = 'e';
    vector<int> ans = findWordsContaining(words,x);
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] <<" ";
    }
    cout << endl;
    return 0;
}