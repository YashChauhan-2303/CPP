//19. Remove Nth Node From End of List

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

// ListNode* removeNthFromEnd(ListNode* head, int n) {
//     int count = 0;
//     ListNode* temp = head;
//     while(temp!=nullptr){
//         count++;
//         temp=temp->next;
//     }
//     temp = head;
//     count = count - n;
//     if(count == 0){
//         head = head->next;
//         return head;
//     }
//     while(count>1){
//         count--;
//         temp = temp->next;
//     }
//     if (temp->next!=nullptr ) temp->next = temp->next->next;
//     return head;
// }

ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* fast  = head;
    ListNode* slow  = head;
    for(int i=0; i<n; i++) fast=fast->next;
    if(fast == nullptr) {
        ListNode* newHead = head->next;
        delete(head);
        return newHead;
    }
    while(fast->next){
        fast = fast->next;
        slow = slow->next;
    }
    ListNode* toDelete = slow->next;
    slow->next = slow->next->next;
    delete(toDelete);
    return head;
}

int main(){
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    // head->next->next = new ListNode(3);
    // head->next->next->next = new ListNode(4);
    // head->next->next->next->next = new ListNode(5);
    // head->next->next->next->next->next = new ListNode(6);

    printList(head);

    int n = 2;
    ListNode* ans = removeNthFromEnd(head,n);
    
    printList(ans);
    return 0;
}
