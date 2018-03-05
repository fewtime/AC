// 暴力搜索
class Solution {
 public:
  bool Find(int target, vector<vector<int> > array) {
    for (int i = 0; i < array.size(); ++i) {
      for (int j = 0; j < array[i].size(); ++j) {
        if (array[i][j] == target) {
          return true;
        }
      }
    }
    return false;
  }
};

// 分治法
class Solution {
 public:
  bool Find(int target, vector<vector<int> > array) {
    int row = array.size();
    int col = array[0].size();
    // 从右上角出发
    // 如果比 target 小， 向下走
    // 如果比 target 大， 向左走
    for (int i = 0, j = col - 1; (i >= 0 && i < row) && (j >= 0 && j < col); ) {
      if (array[i][j] == target) {
        return true;
      } else if (array[i][j] > target) {
        j--;
      } else {
        i++;
      }
    }
    return false;
  }
};
