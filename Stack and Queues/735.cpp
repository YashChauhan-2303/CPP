//735. Asteroid Collision

#include <bits/stdc++.h>
using namespace std;

vector<int> asteroidCollision(vector<int>& asteroids) {
    stack<int> st;
    st.push(asteroids[0]);
    for(int i=1; i<asteroids.size(); i++){
        bool destroyed = false;
        while( !st.empty() && st.top() > 0 && asteroids[i] < 0){
            if(abs(st.top()) < abs(asteroids[i])) {
                st.pop(); 
                continue;
            } else if(abs(st.top()) == abs(asteroids[i])) {
                st.pop(); 
                destroyed = true;
                break;
            } else {
                destroyed = true;
                break;
            }
        } 
        if(!destroyed) {
            st.push(asteroids[i]);
        }
    }
    vector<int> ans;
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main(){
    vector<int> asteroids = { -2,-1,1,2 };
    vector<int> ans = asteroidCollision(asteroids);
    for(auto x: ans){
        cout << x << "\t"; 
    }
    return 0;
}