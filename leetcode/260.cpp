class Solution {
 public:
  vector<int> singleNumber(vector<int>& nums) {
    int diff = 0;
    for (int num : nums) {
      diff ^= num;
    }

    diff &= -diff; // diff = diff & (~(diff - 1));

    vector<int> ret = {0, 0};

    for (int num : nums) {
      if ((num & diff) == 0) {
        ret[0] ^= num;
      } else {
        ret[1] ^= num;
      }
    }

    return ret;

  }
};
