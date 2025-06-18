//3217. Delete Nodes From Linked List Present in Array
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
//     ListNode* modifiedList(vector<int>& nums, ListNode* head) {
//         ListNode* dummy = new ListNode(-1);
//         dummy->next = head;
//         for(int i=0; i<nums.size(); i++){
//             ListNode* curr = dummy->next;
//             ListNode* prev = dummy;
//             while(curr){
//                 if(curr->val == nums[i]){
//                     prev->next = curr->next;
//                     curr = curr->next;
//                     continue;
//                 }
//                 prev = curr;
//                 curr = curr->next;
//             }
//         }
//         return dummy->next;
//     }
// };