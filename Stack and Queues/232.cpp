//232. Implement Queue using Stacks

#include <bits/stdc++.h>
using namespace std;

class MyQueue {
public:
    stack<int> st;

    MyQueue() {
        
    }
    
    void push(int x) {
        if(st.empty()) {
            st.push(x);
            return;
        }
        stack<int> temp;
        int size = st.size();
        for(int i=0; i<size; i++){
            int val = st.top();
            temp.push(val);
            st.pop();
        }
        st.push(x);
        size = temp.size();
        for(int i=0; i<size; i++){
            int val = temp.top();
            st.push(val);
            temp.pop();
        }
    }
    
    int pop() {
        if(st.empty()) return -1;
        int val = st.top();
        st.pop();
        return val;
    }
    
    int peek() {
        if(st.empty()) return -1;
        return st.top();
    }
    
    bool empty() {
        return st.empty();
    }
};


int main(){
    MyQueue q;
    q.push(10);
    q.push(5);
    q.push(1);
    cout << q.peek() << endl;
    cout << q.pop() << endl;
    cout << q.empty() << endl;
    return 0;
}