class NumArray {
 public:
  vector<int> sum;
  NumArray(vector<int> nums) {
    int tmp = 0;
    for (auto &i : nums) {
      tmp += i;
      sum.push_back(tmp);
    }
  }

  int sumRange(int i, int j) {
    return sum[j + 1] - sum[i];
  }
}
