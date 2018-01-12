class Solution {
 public:
  vector<int> grayCode(int n) {
    vector<int> gc;

    for (int i = 0; i < pow(2, n); ++i) {
      gc.push_back(i ^ (i >> 1));
    }

    return gc;
  }
};
