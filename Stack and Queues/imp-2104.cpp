//2104. Sum of Subarray Ranges

#include <bits/stdc++.h>
using namespace std;

// long long subArrayRanges(vector<int>& nums) {
//     int sum = 0;
//     for(int i=0; i<nums.size(); i++){
//         int largest = nums[i], smallest = nums[i];
//         for(int j=i+1; j<nums.size(); j++){
//             largest = max(largest,nums[j]);
//             smallest = min(smallest,nums[j]);
            
//             sum += (largest-smallest);
//         }
//     }
//     return sum;
// }

long long subArrayRanges(vector<int>& nums) {
    int n = nums.size();
    vector<int> nextGreater(n, n), prevGreater(n, -1);
    vector<int> nextSmaller(n, n), prevSmaller(n, -1);
    stack<int> st;

    // Next Greater
    while (!st.empty()) st.pop();
    for (int i = 0; i < n; i++) {
        while (!st.empty() && nums[st.top()] < nums[i]) {
            nextGreater[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }

    // Previous Greater
    while (!st.empty()) st.pop();
    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && nums[st.top()] <= nums[i]) {
            prevGreater[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }

    // Next Smaller
    while (!st.empty()) st.pop();
    for (int i = 0; i < n; i++) {
        while (!st.empty() && nums[st.top()] > nums[i]) {
            nextSmaller[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }

    // Previous Smaller
    while (!st.empty()) st.pop();
    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && nums[st.top()] >= nums[i]) {
            prevSmaller[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }

    long long res = 0;
    for (int i = 0; i < n; i++) {
        long long maxCount = (i - prevGreater[i]) * (nextGreater[i] - i);
        long long minCount = (i - prevSmaller[i]) * (nextSmaller[i] - i);
        res += nums[i] * (maxCount - minCount);
    }

    return res;
}

int main(){

    return 0;
}