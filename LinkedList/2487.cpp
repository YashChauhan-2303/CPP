//2487. Remove Nodes From Linked List

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution {
// public:
//     ListNode* reverseLL(ListNode* head){
//         ListNode* curr = head;
//         ListNode* prev = nullptr;
//         while(curr){
//             ListNode* nextNode = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = nextNode;
//         }
//         return prev;
//     }
//     ListNode* removeNodes(ListNode* head) {
//         if(!head || !head->next) return head;
//         head = reverseLL(head);
//         ListNode* curr = head;
//         ListNode* prev = nullptr;
//         int max = head->val;
//         while(curr){
//             if(curr->val < max){
//                 prev->next = curr->next;
//             } else if (curr->val >= max) {
//                 max = curr->val;
//                 prev = curr;
//             }
//             curr = curr->next;
//         }
//         head = reverseLL(head);
//         return head;
//     }
// };