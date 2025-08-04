// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     TreeNode* insertIntoBST(TreeNode* root, int val) {
//         if (root == nullptr) {
//             TreeNode* newVal = new TreeNode(val);
//             return newVal;            
//         }
//         TreeNode* node = root;
//         TreeNode* prev = root;
//         while(node != nullptr){
//             prev = node;
//             if(node->val < val){
//                 node = node->right;
//             } else {
//                 node = node->left;
//             }
//         }
//         TreeNode* newVal = new TreeNode(val);
//         if(prev->val > val) {
//             prev->left = newVal;
//         } else {
//             prev->right = newVal;
//         }
//         return root;
//     }
// };