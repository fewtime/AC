class Solution {
 public:
  int Fibonacci(int n) {
    if (n <= 1) {
      return n;
    }
    int prev = 0, curr = 1;
    for (int i = 2; i < n; ++i) {
      curr = prev + curr;
      prev = curr - prev;
    }
    return prev + curr;
  }
};
