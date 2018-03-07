class Solution {
 public:
  int minNumberInRotateArray(vector<int> rotateArray) {
    for (int i = 0; i < rotateArray.size(); ++i) {
      if (rotateArray[i] > rotateArray[i + 1]) {
        return rotateArray[i + 1];
      }
    }
    return rotateArray[0];
  }
};
