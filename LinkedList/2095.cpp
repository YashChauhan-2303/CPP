//2095. Delete the Middle Node of a Linked List

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

ListNode* deleteMiddle(ListNode* head) {
    if (head->next == nullptr) {
        delete head;
        return nullptr;
    }
    ListNode* fast = head;
    ListNode* slow = head;
    ListNode* prev = head;
    while(fast && fast->next){
        fast = fast->next->next;
        prev = slow;
        slow = slow->next;
    }
    ListNode* toDelete = prev->next;
    prev->next = prev->next->next;
    delete(toDelete);
    return head;
}

int main(){
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    // head->next->next->next->next->next = new ListNode(6);

    printList(head);

    head = deleteMiddle(head);
    
    printList(head);
    return 0;
}