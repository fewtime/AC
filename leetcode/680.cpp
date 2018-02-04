class Solution {
 public:
  bool validPalindrome(string s) {
    return valid(s, 0, s.size() - 1, true);
  }

  bool valid(string& s, int l, int r, bool flag) {
    return (l >= r) ||
        (s[l] == s[r] ? valid(s, l + 1, r - 1, flag) :
         flag && (valid(s, l + 1, r, false) || valid(s, l, r - 1, false)));
  }
};
