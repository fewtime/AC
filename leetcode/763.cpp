// 先遍历S一次，知道每个字母的最后出现的位置。

// 然后再次遍历，每次遍历到遍历过的字母的最后出现的位置maxLimit。这个maxLimit则是可能会增加的。

class Solution {
 public:
  vector<int> partitionLabels(string S) {
    vector<int> res;

    map<char, int> mp;
    for (int i = 0; i < S.size(); ++i) {
      mp[S[i]] = i;
    }

    int startPoint = 0, k = 0, maxLimit = 0;

    while (k < S.size()) {
      maxLimit = mp[S[k]];
      while (k < maxLimit) {
        maxLimit = max(maxLimit, mp[S[k]]); // 贪心
        k++;
      }
      res.push_back(k - startPoint + 1);
      k++;
      startPoint = k;
    }

    return res;
  }
};
