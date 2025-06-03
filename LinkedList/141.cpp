//141. Linked List Cycle

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

// bool hasCycle(ListNode *head) {
//     ListNode* temp = head;
//     while(temp != nullptr){
//         if(temp->val == 999999){
//             return 1;
//         } else {
//             temp->val = 999999;
//         }
//         temp = temp->next;
//     }
//     return 0;
// }

bool hasCycle(ListNode *head) {
    ListNode* slow = head;
    ListNode* fast = head;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast) return 1;
    }
    return 0;
}

int main(){
    ListNode* head = new ListNode(3);
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = head->next;

    // printList(head);

    cout << hasCycle(head);
        
    return 0;
}