// Binary search
class Solution {
 public:
  bool judgeSquareSum(int c) {
    int low = 0, high = static_cast<int>(sqrt(c));
    while (low <= high) {
      int sum = low * low + high * high;
      if (sum < c) {
        low++;
      } else if (sum > c) {
        high--;
      } else {
        return true;
      }
    }
    return false;
  }
};
