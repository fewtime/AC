class Solution {
 public:
  double Power(double base, int exponent) {
    int p = this->abs(exponent);
    double res = 1;
    while (p) {
      if (p & 1) {
        res *= base;
      }
      base *= base;
      p >>= 1;
    }
    return exponent < 0 ? 1 / res : res;
  }
  int abs(int i) {
    return i < 0 ? -i : i;
  }
};
