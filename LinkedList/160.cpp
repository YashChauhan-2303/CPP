//160. Intersection of Two Linked Lists

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

// ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//     ListNode* A = headA;
//     ListNode* B = headB;
//     while(B != nullptr){
//         A = headA;
//         while(A){
//             if(A == B) {
//                 ListNode* originalA = A;
//                 ListNode* originalB = B;
//                 while(A->next!=nullptr && B->next!=nullptr && A->val == B->val){
//                     A = A->next;
//                     B = B->next;
//                 }
//                 if (B->next == nullptr) return originalA;
//                 else {
//                     A = originalA;
//                     B = originalB;
//                 }
//             }
//             A = A->next;
//         }
//         B = B->next;
//     }
//     return nullptr;
// }

// ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//     unordered_map<ListNode*,int> mp;
//     ListNode* temp = headA;
//     while(temp){
//         mp[temp]=1;
//         temp = temp->next;
//     }
//     temp = headB;
//     while(temp){
//         if(mp.find(temp) != mp.end()) return temp;
//         temp = temp->next;
//     }
//     return nullptr;
// }

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    ListNode* tempA = headA;
    ListNode* tempB = headB;
    while(tempA != tempB){
        tempA = (tempA == nullptr) ? headB : tempA->next;
        tempB = (tempB == nullptr) ? headA : tempB->next;
    }
    return tempA;
}

int main(){
    ListNode* headA = new ListNode(1);
    headA->next = new ListNode(9);
    headA->next->next = new ListNode(1);
    headA->next->next->next = new ListNode(2);
    headA->next->next->next->next = new ListNode(4);
    
    ListNode* headB = new ListNode(3);
    headB->next = headA->next->next->next;
    // headB->next->next = new ListNode(4);
    // headB->next->next->next = new ListNode(8);
    // headB->next->next->next->next = new ListNode(4);
    // headB->next->next->next->next->next = new ListNode(5);

    printList(headA);
    printList(headB);

    ListNode* ans = getIntersectionNode(headA,headB);
    
    printList(ans);
    return 0;
}