// 优化后的暴力搜索
class Solution {
 public:
	void replaceSpace(char *str,int length) {
    int spaceCount = 0;
    int newStringLength = length;
    for (int i = 0; i < length; ++i) {
      if (str[i] == ' ') {
        spaceCount++;
      }
    }
    newStringLength += spaceCount * 2;
    for (int i = length - 1, j = newStringLength - 1; i >= 0 && j >= 0; ) {
      if (str[i] == ' ') {
        str[j--] = '0';
        str[j--] = '2';
        str[j--] = '%';
        i--;
      } else {
        str[j--] = str[i--];
      }
      str[newStringLength] = '\0';
    }
	}
};
