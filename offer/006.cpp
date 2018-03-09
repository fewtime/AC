/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
 public:
  TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
    if (pre.size() != vin.size()) {
      return nullptr;
    }
    if (pre.size() == 0) {
      return nullptr;
    }

    int length = pre.size();
    int vinRootIndex = 0;
    TreeNode *root = new TreeNode(pre[0]);

    for (int i = 0; i < length; ++i) {
      if (vin[i] == pre[0]) {
        vinRootIndex = i;
        break;
      }
    }

    if (vinRootIndex >= length) {
      return nullptr;
    }

    int leftLength = vinRootIndex, rightLength = length - 1 - vinRootIndex;
    vector<int> preLeft(leftLength), vinLeft(leftLength);
    vector<int> preRight(rightLength), vinRight(rightLength);

    for (int i = 0; i < length; ++i) {
      if (i < vinRootIndex) {
        preLeft[i] = pre[i + 1];
        vinLeft[i] = vin[i];
      } else if (i > vinRootIndex) {
        preRight[i - vinRootIndex - 1] = pre[i];
        vinRight[i - vinRootIndex - 1] = vin[i];
      }
    }

    root->left = reConstructBinaryTree(preLeft, vinLeft);
    root->right = reConstructBinaryTree(preRight, vinRight);

    return root;
  }
};
