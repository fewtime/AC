class Solution {
 public:
  string findLongestWord(string s, vector<string>& d) {
    string result = "";
    for (int k = 0; k != d.size(); ++k) {
      int di = 0, si = 0;

      for (di = 0, si = 0; di != d[k].size() && si != s.size(); ++si) {
        if (d[k][di] == s[si]) {
          ++di;
        }
      }

      if (di == d[k].size() &&
          (result.size() < d[k].size() ||
           (d[k] < result && result.size() == d[k].size()))) {
        result = d[k];
      }
    }
    return result;
  }
};
