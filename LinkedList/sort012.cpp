//Sorting 0,1,2

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

// ListNode* sort(ListNode* head){
//     if (!head || !head->next) return head;
//     ListNode* cur = head;
//     vector<int> ans(3,0);
//     while(cur){
//         if (cur->val == 0){
//             ans[0]++;
//         } 
//         if (cur->val == 1){
//             ans[1]++;
//         }
//         if (cur->val == 2){
//             ans[2]++;
//         }
//         cur = cur->next;
//     }
//     cur = head;
//     int i=0;
//     while(cur){
//         if(ans[i]<=0){
//             i++;
//         }    
//         cur->val = i;
//         cur = cur->next;
//         ans[i]--;
//     }
//     return head;
// }

ListNode* sort(ListNode* head){
    if (!head || !head->next) return head;
    ListNode* cur = head;
    ListNode* zero = nullptr;
    ListNode* newHead = nullptr;
    ListNode* oneHead = nullptr;
    ListNode* twoHead = nullptr;
    ListNode* one = nullptr;
    ListNode* two = nullptr;
    vector<int> ans(3,0);
    while(cur){
        if (cur->val == 0){
            if(zero == nullptr){
                zero = cur;
                newHead = zero;
                cur = cur->next;
                continue;
            }
            zero->next = cur;
            zero = zero->next;
        } 
        if (cur->val == 1){
            if(one == nullptr){
                one = cur;
                oneHead = one;
                cur = cur->next;
                continue;
            }
            one->next = cur;
            one = one->next;
        }
        if (cur->val == 2){
            if(two == nullptr){
                two = cur;
                twoHead = two;
                cur = cur->next;
                continue;
            }
            two->next = cur;
            two = two->next;
        }
        cur = cur->next;
    }
    if (zero) zero->next = oneHead ? oneHead : twoHead;
    if (one) one->next = twoHead;
    if (two) two->next = nullptr;
    return newHead;
}

int main(){
    ListNode* head = new ListNode(1);
    head->next = new ListNode(0);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(2);
    head->next->next->next->next = new ListNode(0);
    head->next->next->next->next->next = new ListNode(2);
    head->next->next->next->next->next->next = new ListNode(1);

    printList(head);

    ListNode* ans = sort(head);
    
    printList(ans);
    return 0;
}