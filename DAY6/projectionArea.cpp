class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int N = grid.size();
        int sum = 0;

        for (int i = 0; i < N;  ++i) {
            int maxRow = 0;
            int maxCol = 0;  
            for (int j = 0; j < N; ++j) {
                if (grid[i][j] > 0) sum++;
                maxRow = max(maxRow, grid[i][j]);
                maxCol = max(maxCol, grid[j][i]);
            }
            sum += maxRow + maxCol;
        }

        return sum;
    }
};
