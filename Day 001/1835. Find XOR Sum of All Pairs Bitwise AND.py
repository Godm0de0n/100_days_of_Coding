from functools import reduce

class Solution(object):
    def getXORSum(self, arr1, arr2):
        m = reduce(lambda x, y: x ^ y, arr1)
        n = reduce(lambda x, y: x ^ y, arr2)
        return m & n

