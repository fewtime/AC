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
  TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
    return helper(nums, 0, nums.size() - 1);
  }

  TreeNode* helper(vector<int>& nums, int left, int right) {
    if (left > right) {
      return nullptr;
    }

    int max_index = left;
    for (int i = left; i <= right; ++i) {
      if (nums[max_index] < nums[i]) {
        max_index = i;
      }
    }

    TreeNode *root = new TreeNode(nums[max_index]);
    root->left = helper(nums, left, max_index - 1);
    root->right = helper(nums, max_index + 1, right);

    return root;
  }
};
