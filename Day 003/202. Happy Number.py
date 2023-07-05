class Solution(object):
    def isHappy(self, n):
        sum = n
        while sum != 1 and sum !=4 and sum !=9:
            t = sum
            sum =0
            while t !=0:
                d = t%10
                sum = sum + d*d
                t = t/10
        return sum == 1