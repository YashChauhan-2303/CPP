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
//     bool isSymmetricHelp(TreeNode* Left, TreeNode* Right){
//         if(Left == nullptr || Right == nullptr) return Left==Right;
//         if(Left->val != Right->val) return false;
//         return isSymmetricHelp(Left->left,Right->right) && isSymmetricHelp(Left->right,Right->left);
//     }

//     bool isSymmetric(TreeNode* root) {
//         return root == nullptr || isSymmetricHelp(root->left,root->right);
//     }
// };