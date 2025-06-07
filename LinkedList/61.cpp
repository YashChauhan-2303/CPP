//61. Rotate List

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

// ListNode* rotateRight(ListNode* head, int k) {
//     if (!head || !head->next) return head;
//     ListNode* temp = head;
//     int len=0;
//     while(temp){
//         len++;
//         temp=temp->next;
//     }
//     k = k%len;
//     if (k == 0) return head;
//     ListNode* part1 = head;
//     ListNode* part2 = head;
//     int x = len-k;
//     temp = head;
//     while(x>1){
//         x--;
//         temp = temp->next;
//     }
//     part2 = temp->next;
//     temp->next = nullptr;
//     part1 = reverseLL(part1);
//     part2 = reverseLL(part2);
//     ListNode* newhead = part1;
//     while(part1->next!=nullptr) part1 = part1->next;
//     part1->next = part2;
//     return reverseLL(newhead);
// }

ListNode* rotateRight(ListNode* head, int k) {
    if (!head || !head->next) return head;
    ListNode* temp = head;
    int len=0;
    while(temp){
        len++;
        temp=temp->next;
    }
    k = k%len;
    if (k == 0) return head;
    int x = len-k;
    temp = head;
    while(x>1){
        x--;
        temp = temp->next;
    }
    ListNode* newHead = temp->next;
    temp->next = nullptr;
    temp = newHead;
    while(temp->next) temp = temp->next;
    temp->next = head;
    return newHead;
}

int main(){
    ListNode* head = new ListNode(7);
    head->next = new ListNode(1);
    head->next->next = new ListNode(4);
    head->next->next->next = new ListNode(0);
    head->next->next->next->next = new ListNode(9);

    printList(head);

    int k = 2;
    head =  rotateRight(head,k);

    printList(head);

    return 0;
}