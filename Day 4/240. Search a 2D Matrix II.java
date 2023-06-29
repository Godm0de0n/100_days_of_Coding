class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int r = matrix.length;
        int c = matrix[0].length;
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
}
