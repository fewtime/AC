// DFS
class Solution {
 public:
  int findCircleNum(vector<vector<int>>& M) {
    vector<int> visited(M.size(), 0);
    int count = 0;
    for (int i = 0; i < M.size(); ++i) {
      if (visited[i] == 0) {
        dfs(M, visited, i);
        count++;
      }
    }

    return count;
  }

  void dfs(vector<vector<int>> &M, vector<int> &visited, int i) {
    for (int j = 0; j < M[i].size(); ++j) {
      if (M[i][j] == 1 && visited[j] == 0) {
        visited[j] = 1;
        dfs(M, visited, j);
      }
    }
  }
};


// Union Find
class Solution {
 public:
  int findCircleNum(vector<vector<int>>& M) {
    vector<int> root(M.size());
    int n = M.size();
    int count = n;

    for (int i = 0; i < n; ++i) {
      root[i] = i;
    }

    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < n; ++j) {
        if (M[i][j]) {
          int p1 = find(root, i);
          int p2 = find(root, j);
          if (p1 != p2) {
            root[p2] = p1;
            --count;
          }
        }
      }
    }

    return count;
  }

  int find(vector<int> &root, int x) {
    while (root[x] != x) {
      root[x] = root[root[x]];
      x = root[x];
    }
    return x;
  }
};
