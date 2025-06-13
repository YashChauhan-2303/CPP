//1669. Merge In Between Linked Lists

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
//     ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
//         ListNode* dummy = new ListNode(0);
//         dummy->next = list1;
//         ListNode* curr = list1;
//         ListNode* prev = nullptr;
//         int count = 0;
//         ListNode* start = nullptr;
//         ListNode* end = nullptr;
//         while(curr){
//             if(count == a){
//                 start = prev;
//             }
//             if(count == b){
//                 end = curr->next;
//                 break;
//             }
//             prev = curr;
//             curr = curr->next;
//             count++;
//         }
//         ListNode* list2End = list2;
//         while(list2End->next) list2End = list2End->next;
//         start->next = list2;
//         list2End->next = end;
//         return dummy->next;
//     }
// };