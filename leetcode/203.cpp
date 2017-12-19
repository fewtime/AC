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
  ListNode* removeElements(ListNode* head, int val) {
    if (head == NULL) return head;
    ListNode* newHead = new ListNode(0);
    ListNode* pre = newHead;
    newHead->next = head;

    while (pre && pre->next) {
      if (pre->next->val == val) {
        pre->next = pre->next->next;
      } else {
        pre = pre->next;
      }
    }

    return newHead->next;
  }
};
