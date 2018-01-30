class Solution {
 public:
  int numJewelsInStones(string J, string S) {
    int cnt = 0;
    set<char> setJ(J.begin(), J.end());
    for (char s : S) {
      if (setJ.count(s)) {
        cnt++;
      }
    }
    return cnt;
  }
};
