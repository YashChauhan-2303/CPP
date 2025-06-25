//496. Next Greater Element I

#include <bits/stdc++.h>
using namespace std;

// vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
//     vector<int> ans(nums2.size(), -1);
//     vector<int> ans2;
//     for(int i=0; i<nums2.size(); i++){
//         for(int j=i+1; j<nums2.size(); j++){
//             if(nums2[i] < nums2[j]){
//                 ans[i] = nums2[j];
//                 break;
//             }
//         } 
//     }
//     for(auto x: nums1){
//         for(int i=0; i<nums2.size(); i++){
//             if(x == nums2[i]){
//                 ans2.push_back(ans[i]);
//             }
//         }
//     }
//     return ans2;
// }

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    stack<int> st;
    unordered_map<int,int> mp;
    vector<int> ans;
    reverse(nums2.begin(), nums2.end());
    mp[nums2[0]]=-1;
    st.push(nums2[0]);
    for(int i=1; i<nums2.size(); i++){
        while(!st.empty() && st.top() < nums2[i] ){
            st.pop();
        }
        if(!st.empty()) mp[nums2[i]] = st.top();
        else mp[nums2[i]] = -1;
        st.push(nums2[i]);
    }   
    for(auto x: nums1){
        ans.push_back(mp[x]);
    }
    return ans;
}

int main(){
    vector<int> nums1 = { 4,1,2 }, nums2 = { 1,3,4,2 };
    vector<int> ans = nextGreaterElement(nums1, nums2);
    for(auto x: ans){
        cout << x << "\t";
    }
    return 0;
}