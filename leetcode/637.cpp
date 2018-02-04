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
  vector<double> averageOfLevels(TreeNode* root) {
    queue<TreeNode *> q;
    vector<double> res;

    q.push(root);

    while (!q.empty()) {
      long ans = 0;
      int s = q.size();
      for (int i = 0; i < s; ++i) {
        TreeNode *tmp = q.front();
        q.pop();
        ans += tmp->val;
        if (tmp->left) {
          q.push(tmp->left);
        }
        if (tmp->right) {
          q.push(tmp->right);
        }
      }
      res.push_back(static_cast<double>(ans) / s);
    }

    return res;
  }
};
