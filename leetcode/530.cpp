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
  TreeNode *prev = nullptr;
  int minv = INT_MAX;

  int getMinimumDifference(TreeNode* root) {
    if (root == nullptr) {
      return minv;
    }

    if (root->left) {
      getMinimumDifference(root->left);
    }

    if (prev) {
      minv = std::min(minv, (root->val) - (prev->val));
    }
    prev = root;

    if (root->right) {
      getMinimumDifference(root->right);
    }

    return minv;
  }
};
