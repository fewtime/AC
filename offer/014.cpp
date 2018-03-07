class Solution {
 public:
  void reOrderArray(vector<int> &array) {
    vector<int> odd;
    for (vector<int>::iterator p = array.begin(); p != array.end(); ) {
      if (!(*p % 2)) {
        odd.push_back(*p);
        p = array.erase(p);
      } else {
        p++;
      }
    }
    for (vector<int>::iterator q = odd.begin(); q != odd.end(); ++q) {
      array.push_back(*q);
    }
  }
};
