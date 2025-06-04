//148. Sort List

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

// ListNode* sortList(ListNode* head) {
//     if(head == nullptr || head->next == nullptr) return head;
//     ListNode* curr = head;
//     vector<int> arr;
//     while(curr){
//         arr.push_back(curr->val);
//         curr = curr->next;
//     }
//     sort(arr.begin(), arr.end());
//     int i=0;
//     curr = head;
//     while(curr){
//         curr->val = arr[i];
//         curr = curr->next;
//         i++;
//     }
//     return head;
// }

ListNode* merge(ListNode* left, ListNode* right){
    ListNode* dummy = new ListNode(-1);
    ListNode* temp = dummy;
    while(left != nullptr && right != nullptr){
        if(left->val > right->val){
            temp->next = right;
            temp = temp->next;
            right = right->next;
        } else {
            temp->next = left;
            temp = temp->next;
            left = left->next;
        }
    }
    if(left != nullptr) temp->next = left;
    else temp->next = right;
    return dummy->next;
}

ListNode* mergeSort(ListNode* head) {
    if(head == nullptr || head->next == nullptr) return head;
    ListNode* slow = head;
    ListNode* fast = head;
    ListNode* prev = head;
    while(fast && fast->next){
        prev = slow;
        fast = fast->next->next;
        slow = slow->next;
    }
    prev->next = nullptr;
    ListNode* rightHead = slow;
    ListNode* leftHead = head;
    leftHead = mergeSort(leftHead);
    rightHead = mergeSort(rightHead);
    head = merge(leftHead,rightHead);
    return head;
}

int main(){
    ListNode* head = new ListNode(4);
    head->next = new ListNode(2);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(5);
    // head->next->next->next->next->next = new ListNode(6);

    printList(head);

    head = mergeSort(head);
    
    printList(head);
    return 0;
}