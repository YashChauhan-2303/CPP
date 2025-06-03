//237. Delete Node in a Linked List

#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
 
// void deleteNode(ListNode* node) {
//     ListNode* temp = node;
//     while(temp->next->next!=nullptr){
//         temp->val = temp->next->val;
//         temp = temp->next;
//     }
//     temp->val = temp->next->val;
//     temp->next = nullptr;
// }

void deleteNode(ListNode* node) {
    node->val = node->next->val;
    ListNode* temp = node->next;
    node->next = node->next->next;
    delete temp;
}

void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main(){
    // Create linked list: 4 -> 5 -> 1 -> 9
    ListNode* head = new ListNode(4);
    head->next = new ListNode(5);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(9);

    cout << "Original list: ";
    printList(head);

    // Suppose we want to delete node with value 5 (i.e. head->next)
    deleteNode(head->next);

    cout << "After deletion: ";
    printList(head);

    // Free memory
    while (head) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}