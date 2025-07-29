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
//     vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
//         bool leftRight = false;
//         vector<vector<int>> ans;
//         if(root == nullptr) return ans;
//         stack<TreeNode*> current;
//         stack<TreeNode*> prev;
//         prev.push(root);
//         while(!prev.empty()){
//             vector<int> arr;
//             int size = prev.size();
//             for(int i=0; i<size; i++){
//                 TreeNode* top = prev.top();
//                 prev.pop();
//                 arr.push_back(top->val);
//                 if(leftRight){
//                     if(top->right != nullptr) current.push(top->right);
//                     if(top->left != nullptr) current.push(top->left);
//                 } else {
//                     if(top->left != nullptr) current.push(top->left);
//                     if(top->right != nullptr) current.push(top->right);
//                 }
//             }
//             ans.push_back(arr);
//             swap(current,prev);
//             leftRight=leftRight?false:true;
//         }
//         return ans;
//     }
// };