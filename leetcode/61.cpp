/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
 public:
  ListNode* rotateRight(ListNode* head, int k) {
    if (head == nullptr) {
      return head;
    }
    ListNode* p = head;
    int len = 1;
    while (p->next) {
      p = p->next;
      ++len;
    }
    p->next = head;
    k = len - k % len;
    while (k-- > 0) {
      p = p->next;
    }
    head = p->next;
    p->next = nullptr;
    return head;
  }
};
