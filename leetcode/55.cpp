// 贪心算法
class Solution {
 public:
  bool canJump(vector<int>& nums) {
    int reach = nums[0];
    for (int i = 1; i < nums.size() && reach >= i; ++i) {
      if (i + nums[i] > reach) {
        reach = i + nums[i];
      }
    }
    return (reach >= nums.size() - 1) ? true : false;
  }
};
