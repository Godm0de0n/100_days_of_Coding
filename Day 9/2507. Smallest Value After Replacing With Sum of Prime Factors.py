class Solution(object):
    def prime(self, m):
        a = 0
        i = 2
        while m > 1:
            while m % i == 0:
                a += i
                m //= i
            i += 1
        return a
    
    def smallestValue(self, n):
        a = self.prime(n)
        if a == n:
            return a
        else:
            return self.smallestValue(a)
    
        """
        :type n: int
        :rtype: int
        """