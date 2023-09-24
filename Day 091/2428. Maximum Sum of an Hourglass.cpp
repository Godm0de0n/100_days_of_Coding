class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {
        int ans = INT_MIN;
        int r = grid.size()-2;
        int c = grid[0].size()-2;

        while(r>0 && c>0){
          int count = grid[r][c] + grid[r+1][c] + grid[r+2][c] + grid[r+1][c+1] + grid[r][c+2] + grid[r+1][c+2] + grid[r+2][c+2];
          ans = max(ans,count);
          r--;
          c--;
        }
        return ans;
    }
};