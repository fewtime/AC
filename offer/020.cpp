class Solution {
public:
    vector<int> printMatrix(vector<vector<int> > matrix) {
        vector<int> res;

        if ((matrix.size() == 0) || (matrix[0].size() == 0)) {
            return res;
        }

        vector<vector<bool> > v(matrix.size(), vector<bool>(matrix[0].size(), false));

        const int direction[4][2] = {
            {0, 1}, // right
            {1, 0}, // down
            {0, -1}, // left
            {-1, 0} // up
        };

        int count = matrix.size() * matrix[0].size();
        int i = 0, j = 0, d = 0;

        while (count--) {
            res.push_back(matrix[i][j]);
            v[i][j] = true;
            int nextI = i + direction[d][0];
            int nextJ = j + direction[d][1];
            if (! (0 <= nextI && nextI < matrix.size()
               && 0 <= nextJ && nextJ < matrix[0].size()
               && !v[nextI][nextJ]) ) {
                (++d) %= 4; // turn
            }
            i += direction[d][0];
            j += direction[d][1];
        }

        return res;
    }
};
