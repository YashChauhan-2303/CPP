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
//     pair<int,int> solve(TreeNode* root, int& result){
//         if(root == nullptr){
//             return {0,0};
//         }
//         auto Lsum = solve(root->left, result);
//         auto Rsum = solve(root->right, result);

//         int sum = (Lsum.first + Rsum.first + root->val);
//         int count = Lsum.second + Rsum.second + 1;

//         int avg = sum / count;
//         if(avg == root->val) result++;

//         return {sum,count};

//     }

//     int averageOfSubtree(TreeNode* root) {
//         int result = 0;
//         solve(root,result);
//         return result;
//     }
// };