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
    vector<TreeNode*> st;

    for (int n : nums) {
      TreeNode *curr = new TreeNode(n);
      while (!st.empty() && st.back()->val < n) {
        curr->left = st.back();
        st.pop_back();
      }

      if (!st.empty()) {
        st.back()->right = curr;
      }

      st.push_back(curr);
    }

    return st.front();
  }

};
