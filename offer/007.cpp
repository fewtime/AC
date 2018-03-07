class Solution
{
 public:
  void push(int node) {
    inStack.push(node);
  }

  int pop() {
    int res = 0;
    if (this->isEmpty()) {
      return -1;
    } else if (outStack.empty()) {
      while (!inStack.empty()) {
        int tmp = inStack.top();
        inStack.pop();
        outStack.push(tmp);
      }
    }
    res = outStack.top();
    outStack.pop();
    return res;
  }

  bool isEmpty() {
    return inStack.empty() && outStack.empty();
  }

 private:
  stack<int> inStack;
  stack<int> outStack;
};
