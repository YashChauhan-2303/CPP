//Solution 1

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
//     void tree(TreeNode* root, vector<int>& arr){
//         if(root == nullptr) return;
//         arr.push_back(root->val);
//         tree(root->left,arr);
//         tree(root->right,arr);
//     }

//     int kthSmallest(TreeNode* root, int k) {
//         vector<int> arr;
//         tree(root,arr);
//         sort(arr.begin(),arr.end());
//         if( k <= arr.size()) return arr[k-1];
//         return -1;
//     }
// };

//Solution 2

// class Solution {
// public:
//     void tree(TreeNode* root, vector<int>& arr){
//         if(root->left != nullptr) tree(root->left,arr);
//         arr.push_back(root->val);
//         if(root->right != nullptr) tree(root->right,arr);
//     }

//     int kthSmallest(TreeNode* root, int k) {
//         vector<int> arr;
//         tree(root,arr);
//         if( k <= arr.size()) return arr[k-1];
//         return -1;
//     }
// };