/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
 public:
  int sumOfLeftLeaves(TreeNode* root) {
    if (!root) {
      return 0;
    }
    if (root->left && !root->left->left && !root->left->right) {
      return sumOfLeftLeaves(root->right) + root->left->val;
    }
    return sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
  }
};
