class Solution {
 public:
  vector<int> anagramMappings(vector<int>& A, vector<int>& B) {
    vector<int> result;
    unordered_map<int, int> m;

    for (int i = 0; i != A.size(); ++i) {
      m[B[i]] = i;
    }

    for (int i = 0; i != A.size(); ++i) {
      result.push_back(m[A[i]]);
    }

    return result;
  }
};
