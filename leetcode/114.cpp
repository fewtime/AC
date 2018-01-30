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
  void flatten(TreeNode* root) {
    TreeNode *p = root;
    while (p) {
      if (p->left) {
        TreeNode *left = p->left;
        while (left->right) {
          left = left->right;
        }
        left->right = p->right;
        p->right = p->left;
        p->left = nullptr;
      }
      p = p->right;
    }
  }
};
