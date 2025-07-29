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
//     vector<double> averageOfLevels(TreeNode* root) {
//         vector<double> arr;
//         stack<TreeNode*> st;
//         stack<TreeNode*> next;
//         st.push(root);

//         while(!st.empty()){
//             int size = st.size();
//             double sum = 0;
//             for(int i=0; i<size; i++){
//                 TreeNode* top = st.top();
//                 st.pop();
//                 sum += top->val;
//                 if(top->right != nullptr) next.push(top->right);
//                 if(top->left != nullptr) next.push(top->left);
//             }
//             arr.push_back(sum/size);
//             swap(next,st);
//         }

//         return arr;
//     }
// };