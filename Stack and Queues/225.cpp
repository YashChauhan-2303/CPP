#include <bits/stdc++.h>
using namespace std;

class MyStack {
private:
    queue<int> q;

public:
    MyStack() {
    }

    void push(int x) {
        q.push(x);
        int size = q.size();
        for (int i = 0; i < size - 1; i++) {
            q.push(q.front());
            q.pop();
        }
    }

    int pop() {
        if (q.empty()) return -1; 
        int val = q.front();
        q.pop();
        return val;
    }

    int top() {
        if (q.empty()) return -1; 
        return q.front();
    }

    bool empty() {
        return q.empty();
    }
};

int main() {
    MyStack s;
    s.push(10);
    s.push(20);
    cout << s.top() << endl;   // 20
    cout << s.pop() << endl;   // 20
    cout << s.top() << endl;   // 10
    cout << s.empty() << endl; // 0 (false)
    s.pop();
    cout << s.empty() << endl; // 1 (true)
    return 0;
}
