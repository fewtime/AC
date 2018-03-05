/**
 *  struct ListNode {
 *        int val;
 *        struct ListNode *next;
 *        ListNode(int x) :
 *              val(x), next(NULL) {
 *        }
 *  };
 */

// 栈
class Solution {
 public:
  vector<int> printListFromTailToHead(ListNode* head) {
    stack<int> st;
    vector<int> res;

    while (head) {
      st.push(head->val);
      head = head->next;
    }

    while (!st.empty()) {
      res.push_back(st.top());
      st.pop();
    }

    return res;
  }
};

// 递归
class Solution {
 public:
  vector<int> printListFromTailToHead(ListNode* head) {
    vector<int> res;
    fun(head, res);
    return res;
  }
  void fun(ListNode *head, vector<int> &res) {
    if (head) {
      fun(head->next, res);
      res.push_back(head->val);
    }
  }
};
