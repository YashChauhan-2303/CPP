//234. Palindrome Linked List

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

// bool isPalindrome(ListNode* head) {
//     ListNode* curr = head;
//     ListNode* prev = nullptr;
//     ListNode* copy = nullptr;
//     ListNode* copyHead = nullptr;
//     while(curr){
//         if (copy == nullptr){
//             ListNode* temp = new ListNode(curr->val);
//             copy = temp;
//             copyHead = copy;
//         } else {
//             ListNode* temp = new ListNode(curr->val);
//             copy->next=temp;
//             copy= copy->next;
//         }
//         curr = curr->next;
//     }
//     curr = copyHead;
//     while(curr){
//         ListNode* next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//     }
//     curr = head;
//     copyHead = prev;
//     while(curr && copyHead){
//         if (curr->val != copyHead->val) return 0;
//         curr=curr->next;
//         copyHead=copyHead->next;
//     }
//     return 1;
// }

ListNode* reverseLinkedList(ListNode* head){
    if (head==nullptr || head->next == nullptr) return head;
    ListNode* curr = head;
    ListNode* prev = nullptr;
    while(curr){
        ListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

bool isPalindrome(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;
    while ( fast->next && fast->next->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    ListNode* newHead = reverseLinkedList(slow->next);
    ListNode* first = head;
    ListNode* second = newHead;
    while(second){
        if(first->val != second->val){
            reverseLinkedList(newHead);
            return 0;
        }
        second = second->next;
        first = first->next;
    }
    reverseLinkedList(newHead);
    return 1;
}

int main(){
    ListNode* head = new ListNode(1);
    head->next = new ListNode(1);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(1);
    // head->next->next->next->next->next = new ListNode(6);

    printList(head);

    cout << isPalindrome(head);

    return 0;
}