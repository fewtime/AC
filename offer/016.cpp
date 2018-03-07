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
  ListNode* ReverseList(ListNode* pHead) {
    if (!pHead) {
      return nullptr;
    }
    ListNode *newHead= pHead, *pNext = nullptr, *pNode = pHead -> next;
    newHead->next = nullptr;
    while (pNode) {
      pNext = pNode->next;
      pNode->next = newHead;
      newHead = pNode;
      pNode = pNext;
    }
    return newHead;
  }
};
