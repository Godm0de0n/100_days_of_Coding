class Solution(object):
    def findComplement(self, num):
        ans = 0
        a =1
        while (num > 0):
            if (num & 1)==0 :
                ans = ans+a
            a = a*2
            num >>=1
        return ans
        """
        :type num: int
        :rtype: int
        """