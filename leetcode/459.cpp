// 把字符串看作一个循环链
class Solution {
 public:
  bool repeatedSubstringPattern(string s) {
    string nextStr = s;
    int len = s.length();

    if (len < 1) {
      return false;
    }

    for (int i = 1; i <= len / 2; ++i) {
      if (len % i == 0) {
        nextStr = shiftString(s, i);
        if (nextStr == s) {
          return true;
        }
      }
    }

    return false;
  }

  string shiftString(string &s, int i) {
    string res = s.substr(i);
    res += s.substr(0, i);
    return res;
  }
};
