class Solution {
 public:
  string longestPalindrome(string s) {
    string mx = "";

    for (int i = 0; i < s.size(); ++i) {
      string s1 = expand(s, i, i); // aba
      string s2 = expand(s, i, i + 1); // abba
      if (s1.size() > mx.size()) {
        mx = s1;
      }
      if (s2.size() > mx.size()) {
        mx = s2;
      }
    }

    return mx;
  }

  string expand(string s, int left, int right) {
    while (left >= 0 && right < s.size() && s[left] == s[right]) {
      left--;
      right++;
    }

    return s.substr(left + 1, right - left - 1);
  }
};
