class Solution(object):
    def findTheWinner(self, n, k):
        a =0
        for i in range (1, n+1):
            a= (a+k)%i
        return a+1
        """
        :type n: int
        :type k: int
        :rtype: int
        """