//206. Reverse Linked List

#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// ListNode* reverseList(ListNode* head) {
//     stack<int> st;
//     ListNode* temp = head;
//     int tos = -1;
//     while(temp != nullptr){
//         tos++;
//         st.push(temp->val);
//         temp = temp->next;
//     }    
//     temp=head;
//     while(temp != nullptr){
//         temp->val = st.top();
//         temp = temp->next;
//         st.pop();
//     }
//     return head;
// }

ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* curr = head;
    while(curr){
        ListNode* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
}

int main(){
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = new ListNode(6);

    printList(head);

    ListNode* ans = reverseList(head);
    
    printList(ans);
    return 0;
}