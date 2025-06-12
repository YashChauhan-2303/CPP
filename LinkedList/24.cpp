// Swap Nodes in Pair

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
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (!head || !head->next) return head;
        ListNode* curr = head;
        ListNode* prev = nullptr;
        ListNode* newHead = nullptr;
        while(curr && curr->next){
            if (curr == head){
                ListNode* nextNode = curr->next;
                newHead = nextNode;
                curr->next = nextNode->next;
                nextNode->next = curr;
                prev = curr;
                curr = curr->next;
            } else {
                ListNode* nextNode = curr->next;
                curr->next = nextNode->next;
                nextNode->next = curr;
                prev->next = nextNode;
                prev = curr;
                curr = curr->next;
            }
        }
        return newHead;
    }
};