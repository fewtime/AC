/*
  struct ListNode {
  int val;
  struct ListNode *next;
  ListNode(int x) :
  val(x), next(NULL) {
  }
  };*/
class Solution {
 public:
  ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
  {
    if (!pHead1) {
      return pHead2;
    } else if (!pHead2) {
      return pHead1;
    }

    ListNode *newHead, *p = pHead1, *q = pHead2;
    if (pHead1->val > pHead2->val) {
      newHead = pHead2;
      q = q->next;
    } else {
      newHead = pHead1;
      p = p->next;
    }
    ListNode *curr = newHead;

    while (p && q) {
      if (p->val > q->val) {
        curr->next = q;
        curr = curr->next;
        q = q->next;
      } else {
        curr->next = p;
        curr = curr->next;
        p = p->next;
      }
    }

    if (p) {
      curr->next = p;
    } else {
      curr->next = q;
    }

    return newHead;
  }
};
