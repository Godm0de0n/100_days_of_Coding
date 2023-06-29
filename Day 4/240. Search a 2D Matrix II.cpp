class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size();
        int c = matrix[0].size();
        int a = 0;
        int b = c - 1;
        while (a < r && b >= 0) {
            if (target == matrix[a][b]) {
                return true;
            } else if (target > matrix[a][b]) {
                a++;
            } else {
                b--;
            }
        }
        return false;
    }
};
