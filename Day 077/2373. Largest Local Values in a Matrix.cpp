class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {

        int l = grid.size();

        vector<vector<int>> ans (l - 2, vector<int>(l - 2));

        for(int i = 0; i <= l - 3; i++) {
            for(int j = 0; j <= l - 3; j++) {

                int a = max(grid[i][j], max(grid[i+1][j], grid[i+2][j]));
                int b = max(grid[i][j+1], max(grid[i+1][j+1], grid[i+2][j+1]));
                int c = max(grid[i][j+2], max(grid[i+1][j+2], grid[i+2][j+2]));

                ans[i][j] = max(a,max(b,c));
            }
        }
        return ans;
    }
};