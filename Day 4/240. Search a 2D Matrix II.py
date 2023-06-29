class Solution(object):
    def searchMatrix(self, matrix, target):
        r = len(matrix)
        c = len(matrix[0])
        a = 0
        b = c - 1
        while a < r and b >= 0:
            if target == matrix[a][b]:
                return True
            elif target > matrix[a][b]:
                a = a + 1
            else:
                b = b - 1
        return False