class Solution {
 public:
  int dist(vector<int> &p, vector<int> &q) {
    return (p[0] - q[0]) * (p[0] - q[0])
        + (p[1] - q[1]) * (p[1] - q[1]);
  }

  bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
    vector<vector<int>> p = {p1, p2, p3, p4};
    sort(p.begin(), p.end(), [](const vector<int> &a, const vector<int> &b) -> bool {
        return a[0] != b[0] ? a[0] < b[0] : a[1] <= b[1];
      });
    for (auto &e : p) {
      cout << e[0] << " " << e[1] << endl;
    }
    return dist(p[0], p[1]) != 0
        // sides
        && dist(p[0], p[1]) == dist(p[1], p[3])
        && dist(p[1], p[3]) == dist(p[3], p[2])
        && dist(p[3], p[2]) == dist(p[2], p[0])
        // diagonals
        && dist(p[0], p[3]) == dist(p[1], p[2]);
  }
};
