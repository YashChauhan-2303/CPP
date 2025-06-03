//876. Middle of the Linked List

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

// ListNode* middleNode(ListNode* head) {
//     ListNode* temp = head;
//     int count = 0;
//     while(temp!=nullptr) {
//         temp = temp->next;
//         count++;
//     }
//     count /=2;
//     temp = head;
//     while(count > 0) {
//         temp = temp->next;
//         count--;
//     }
//     return temp;
// }

ListNode* middleNode(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main(){
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    // head->next->next->next->next->next = new ListNode(6);

    printList(head);

    ListNode* ans = middleNode(head);
    
    printList(ans);
    return 0;
}