//328. Odd Even Linked List

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

// ListNode* oddEvenList(ListNode* head) {
//     if (!head || !head->next) return head;

//     ListNode* odd = head;
//     ListNode* even = head->next;
//     ListNode* evenHead = even;

//     while (even && even->next) {
//         odd->next = even->next;
//         odd = odd->next;

//         even->next = odd->next;
//         even = even->next;
//     }

//     odd->next = evenHead;
//     return head;
// }

ListNode* oddEvenList(ListNode* head) {
    if(head == nullptr || head->next == nullptr) return head;
    ListNode* newHead = nullptr;
    ListNode* evenStart = nullptr;
    ListNode* odd = nullptr;
    ListNode* even = nullptr;
    ListNode* temp = head;
    int count = 1;
    while(temp){
        int num = temp->val;
        if(count%2==0){
            if (even == nullptr) {
                even = new ListNode(num);
                evenStart = even;
            }else {
                ListNode* evenTemp = new ListNode(num);
                even->next = evenTemp;
                even = even->next;
            }
        } else {
            if (odd == nullptr) {
                odd = new ListNode(num);
                newHead = odd;
            } else {
                ListNode* oddTemp = new ListNode(num);
                odd->next = oddTemp;
                odd = odd->next;
            }
        }
        temp = temp->next;
        count++;
    }
    odd->next = evenStart;
    return newHead;
}

int main(){
    ListNode* head = new ListNode(2);
    head->next = new ListNode(1);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(5);
    head->next->next->next->next = new ListNode(6);
    head->next->next->next->next->next = new ListNode(4);
    head->next->next->next->next->next->next = new ListNode(7);

    printList(head);

    head = oddEvenList(head);

    printList(head);

    return 0;
}