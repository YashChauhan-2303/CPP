//141. Linked List Cycle II

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

ListNode *detectCycle(ListNode *head) {
    if( !head || head->next == nullptr) return nullptr;
    ListNode* slow = head;
    ListNode* fast = head;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
        
        if(slow == fast){
            break;
        }
    }
    if (slow != fast) return nullptr;
    ListNode* temp = head;
    while(temp != slow){
        temp = temp->next;
        slow = slow -> next;
    }
    return temp;
}

int main(){
    ListNode* head = new ListNode(3);
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = head->next;

    // printList(head);

    ListNode* ans = detectCycle(head);
        
    return 0;
}