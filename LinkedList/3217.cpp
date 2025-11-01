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

//     ListNode* modifiedList(vector<int>& nums, ListNode* head) {
//         unordered_set<int> ban(nums.begin(), nums.end());

//         ListNode dummy(0, head);
//         ListNode* prev = &dummy;
//         ListNode* curr = head;

//         while (curr) {
//             if (ban.count(curr->val)) {
//                 prev->next = curr->next;
//                 curr = prev->next;
//             } else {
//                 prev = curr;
//                 curr = curr->next;
//             }
//         }
//         return dummy.next;
//     }    
// };