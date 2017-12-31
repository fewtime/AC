class Solution {
 public:
  int findLengthOfLCIS(vector<int>& nums) {
    int ans = 0, cnt = 0;
    int last = INT_MIN;

    for (auto &i : nums) {
      if (i > last) {
        cnt++;
      } else {
        ans = max(cnt, ans);
        cnt = 1;
      }
      last = i;
    }

    return max(cnt, ans);
  }
};
