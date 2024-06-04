vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int nrows = heights.size();     // # of rows
        int ncols = heights[0].size();  // # of columns

        // create matrices to mark visited cells for both oceans
        vector<vector<bool>> pacific(nrows), atlantic(nrows);
        for (int i = 0; i < nrows; ++i) {
            pacific[i]  = vector<bool>(ncols);
            atlantic[i] = vector<bool>(ncols);
        }

        // DFS traversal from the first and last column for both oceans
        for (int row = 0; row < nrows; ++row) {
            dfs(heights, pacific, row, 0);
            dfs(heights, atlantic, row, ncols - 1);
        }

        // DFS traversal from the first and last row for both oceans
        for (int col = 0; col < ncols; ++col) {
            dfs(heights, pacific, 0, col);
            dfs(heights, atlantic, nrows - 1, col);
        }
        // Find cells reachable from both oceans and store their coordinates in result.
        vector<vector<int>> result;
        for (int row = 0; row < nrows; ++row) {
            for (int col = 0; col < ncols; ++col) {
                if (pacific[row][col] && atlantic[row][col]) {
                    result.push_back({row, col});
                }
            }
        }
        return result;
    }

private:
    void dfs(vector<vector<int>>& heights, vector<vector<bool>>& visited, int row, int col) {
        int nrows = heights.size();     // # of rows
        int ncols = heights[0].size();  // # of columns
        visited[row][col] = true;
        // up
        if (row > 0 && !visited[row-1][col] && heights[row-1][col] >= heights[row][col]) {
            dfs(heights, visited, row-1, col);
        }
        // down
        if (row+1 < nrows && !visited[row+1][col] && heights[row+1][col] >= heights[row][col]) {
            dfs(heights, visited, row+1, col);
        }
        // left
        if (col > 0 && !visited[row][col-1] && heights[row][col-1] >= heights[row][col]) {
            dfs(heights, visited, row, col-1);
        }
        // right
        if (col+1 < ncols && !visited[row][col+1] && heights[row][col+1] >= heights[row][col]) {
            dfs(heights, visited, row, col+1);
        }
    }
};