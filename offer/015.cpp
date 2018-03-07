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
  ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
    ListNode *left = pListHead, *right = pListHead;
    unsigned int i = 0;
    for (i = 0; i < k && right; ++i) {
      right = right -> next;
    }
    if (!right && i < k) {
      return nullptr;
    }
    while (right) {
      left = left -> next;
      right = right -> next;
    }
    return left;
  }
};
