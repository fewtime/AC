class Solution {
 public:
  int countPrimeSetBits(int L, int R) {
    set<int> primeNumberTable = {2, 3, 5, 7, 11, 13, 17, 19};

    int cnt = 0;
    for (int i = L; i <= R; ++i) {
      int bits = 0;
      int n = i;
      while (n) {
        bits += (n & 1);
        n >>= 1;
      }
      cnt += primeNumberTable.count(bits);
    }

    return cnt;
  }
};
