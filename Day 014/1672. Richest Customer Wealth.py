class Solution(object):
    def maximumWealth(self, accounts):
        return max([sum(i) for i in accounts])
        """
        :type accounts: List[List[int]]
        :rtype: int
        """