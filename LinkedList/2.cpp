//2. Add Two Numbers

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

// ListNode* reverseLL(ListNode* head){
//     ListNode* cur = head;
//     ListNode* prev = nullptr;
//     while(cur){
//         ListNode* nextNode = cur->next;
//         cur->next = prev;
//         prev = cur;
//         cur = nextNode;
//     }
//     return prev;
// }

// ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//     ListNode* temp1 = reverseLL(l1);
//     ListNode* temp2 = reverseLL(l2);
//     ListNode* newhead = new ListNode(-1);
//     ListNode* head = newhead;
//     int carry = 0;
//     while(temp1 && temp2 ){
//         int sum = temp1->val + temp2->val + carry;
//         if (sum>=10) {
//             carry = sum/10;
//             sum = sum%10;
//         } else {
//             carry = 0;
//         }
//         head->next = new ListNode(sum);
//         head = head->next;
//         temp1 = temp1->next;
//         temp2 = temp2->next;
//     }
//     if ( temp1 == nullptr){
//         while(temp2){
//             head->next = new ListNode(temp2->val);
//             temp2 = temp2->next;
//         }
//     }
//     if ( temp2 == nullptr){
//         while(temp1){
//             head->next = new ListNode(temp1->val);
//             temp1 = temp1->next;
//         }
//     }
//     return (newhead->next);
// }

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* temp1 = (l1);
    ListNode* temp2 = (l2);
    ListNode* newhead = new ListNode(-1);
    ListNode* head = newhead;
    int carry = 0;
    while(temp1 || temp2 || carry){
        int sum = carry;
        if(temp1){
            sum+= temp1->val;
            temp1 = temp1->next;
        }
        if(temp2){
            sum+= temp2->val;
            temp2 = temp2->next;
        }
        carry = sum/10;
        head->next = new ListNode(sum%10);
        head = head->next;
    }
    return (newhead->next);
}

int main(){
    ListNode* headA = new ListNode(1);
    headA->next = new ListNode(9);
    headA->next->next = new ListNode(1);
    headA->next->next->next = new ListNode(2);
    headA->next->next->next->next = new ListNode(4);
    
    ListNode* headB = new ListNode(3);
    headB->next = new ListNode(2);
    headB->next->next = new ListNode(4);
    headB->next->next->next = new ListNode(8);
    headB->next->next->next->next = new ListNode(4);
    headB->next->next->next->next->next = new ListNode(5);

    printList(headA);
    printList(headB);

    ListNode* ans = addTwoNumbers(headA,headB);
    
    printList(ans);
    return 0;
}