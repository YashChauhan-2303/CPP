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
//     void helper(TreeNode* root, vector<string>& result, string path){
//         if (!root) return;
//         if (!path.empty()) path += "->";
//         path += to_string(root->val);
//         if (!root->left && !root->right) {
//             result.push_back(path);
//             return;
//         }
//         helper(root->left,result,path);
//         helper(root->right,result,path);
//     }

//     vector<string> binaryTreePaths(TreeNode* root) {
//         vector<string> result;
//         helper(root,result,"");
//         return result;
//     }
// };