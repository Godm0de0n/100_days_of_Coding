class Solution(object):
    def climbStairs(self, n):
        a = 1
        b = 0
        for i in range(1, n+1):
            x = a + b
            b = a
            a = x
        return a
        """
        :type n: int
        :rtype: int
        """
