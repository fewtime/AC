class Solution {
 public:
  int maxProfit(vector<int>& prices) {
    int s = prices.size();
    if (s == 0) {
      return 0;
    }
    int maxProfit = INT_MIN, minPrice = INT_MAX;
    for (int i = 0; i < s; ++i) {
      if (prices[i] < minPrice) {
        minPrice = prices[i];
      }
      if (maxProfit < prices[i] - minPrice) {
        maxProfit = prices[i] - minPrice;
      }
    }
    return maxProfit;
  }
};
