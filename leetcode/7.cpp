class Solution {
public:
  int reverse(int x, long r = 0) {
    return x ? reverse(x / 10, r * 10 + x % 10) : (static_cast<int>(r) == r) * r;
  }
};
