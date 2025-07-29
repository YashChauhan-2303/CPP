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
//     void goRight(TreeNode* root, int level, vector<int>& st){
//         if(root == nullptr) return;
//         if(st.size() == level) st.push_back(root->val);
//         goRight(root->right,level+1,st);
//         goRight(root->left,level+1,st);
//     }

//     vector<int> rightSideView(TreeNode* root) {
//         vector<int> ans;
//         goRight(root,0,ans);
//         return ans;
//     }
// };