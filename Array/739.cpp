//739. Daily Temperatures

#include<bits/stdc++.h>
using namespace std;

// vector<int> dailyTemperatures(vector<int>& nums) {
//     vector<int> ans;
//     for(int i=0; i<nums.size(); i++){
//         int j=i+1;
//         while(j<nums.size() && nums[j]<=nums[i]) j++;
//         if (j==nums.size()) { 
//             ans.push_back(0);
//         } else {
//             ans.push_back( j-i );
//         }
//     }
//     return ans;
// }

vector<int> dailyTemperatures(vector<int>& temperatures) {
    int n = temperatures.size();
    vector<int> ans(n, 0); 
    stack<int> st; 
    for (int i = n - 1; i >= 0; --i) {
        while (!st.empty() && temperatures[st.top()] <= temperatures[i]) {
            st.pop();
        }
        if (!st.empty()) {
            ans[i] = st.top() - i;
        }
        st.push(i);
    }
    return ans;
}

int main(){
    vector<int> temperatures = { 89,62,70,58,47,47,46,76,100,70 };
    vector<int> ans = dailyTemperatures(temperatures);
    for(auto x: ans){
        cout << x << " ";
    }
    return 0;
}