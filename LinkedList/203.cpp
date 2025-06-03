//203. Remove Linked List Elements

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

ListNode* removeElements(ListNode* head, int val) {
    while (head && head->val == val) {
        head = head->next;
    }
    ListNode* curr = head;
    ListNode* prev = head;
    while(curr && prev){
        if(curr->val == val){
            prev->next = curr->next;
            curr = curr->next;
        } else {
            prev=curr;
            curr = curr->next;
        }
    }
    return head;
}

int main(){
    ListNode* head = new ListNode(7);
    head->next = new ListNode(7);
    head->next->next = new ListNode(7);
    head->next->next->next = new ListNode(7);
    head->next->next->next->next = new ListNode(7);

    printList(head);

    int val = 7;
    head =  removeElements(head,val);

    printList(head);

    return 0;
}