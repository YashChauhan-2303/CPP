//907. Sum of Subarray Minimums

#include <bits/stdc++.h>
using namespace std;

// class Solution {
//     vector<int> findNSE(vector<int>& arr)
//     {
//         int n=arr.size();
//         stack<int> st;
//         vector<int> nse(n,n);
//         for(int i=n-1;i>=0;i--)
//         {
//             while(!st.empty() && arr[st.top()]>=arr[i]) st.pop();
//             if(!st.empty()) nse[i]=st.top();
//             st.push(i);
//         }
//         return nse;
//     }
//     vector<int> findPSEE(vector<int>& arr)
//     {
//         int n=arr.size();
//         stack<int> st;
//         vector<int> psee(n,-1);
//         for(int i=0;i<n;i++)
//         {
//             while(!st.empty() && arr[st.top()]>arr[i]) st.pop();
//             if(!st.empty()) psee[i]=st.top();
//             st.push(i);
//         }
//         return psee;
//     }
// public:
//     int sumSubarrayMins(vector<int>& arr)
//     {
//         int mod=1e9+7,ans=0;
//         vector<int> nse=findNSE(arr),psee=findPSEE(arr);
//         for(int i=0;i<arr.size();i++)
//         {
//             int left=i-psee[i],right=nse[i]-i;
//             ans=(ans+(((left*1LL*right)%mod)*arr[i])%mod)%mod;
//         }
//         return ans;
//     }
// };

// int sumSubarrayMins(vector<int>& arr) {
//         const int MOD = 1e9 + 7;
//         int n = arr.size();
//         long long sum=0;
//         for(int i=0; i<n; i++){
//             int minim = arr[i];
//             for(int j=i; j<n; j++){
//                 minim = min(minim, arr[j]);
//                 sum = (sum + minim) % MOD;
//             }
//         }
//         return static_cast<int>(sum);
//     }

int sumSubarrayMins(vector<int>& arr) {
    const int MOD = 1e9 + 7;
    int n = arr.size();

    vector<int> left(n), right(n);
    stack<int> st;

    // Find distance to Previous Lesser Element
    for(int i = 0; i < n; ++i) {
        int cnt = 1;
        while(!st.empty() && arr[st.top()] > arr[i]) {
            cnt += left[st.top()];
            st.pop();
        }
        left[i] = cnt;
        st.push(i);
    }

    while(!st.empty()) st.pop();

    // Find distance to Next Lesser Element
    for(int i = n-1; i >= 0; --i) {
        int cnt = 1;
        while(!st.empty() && arr[st.top()] >= arr[i]) {
            cnt += right[st.top()];
            st.pop();
        }
        right[i] = cnt;
        st.push(i);
    }

    long long sum = 0;
    for(int i = 0; i < n; ++i) {
        sum = (sum + (long long)arr[i] * left[i] * right[i]) % MOD;
    }

    return (int)sum;
}

int main(){
    vector<int> arr = { 3,1,2,4 };
    cout << sumSubarrayMins(arr);
    return 0;
}
