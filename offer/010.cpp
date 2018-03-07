class Solution {
 public:
  int  NumberOf1(int n) {
    int cnt = 0;
    if (n < 0) {
      n &= 0x7fffffff;
      cnt++;
    }
    while (n) {
      cnt  += n & 1;
      n = n >> 1;
    }
    return cnt;
  }
};
