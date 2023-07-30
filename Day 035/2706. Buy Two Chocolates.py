class Solution(object):
    def buyChoco(self, prices, money):
        prices.sort()
        a = prices[0] + prices[1]
        if a > money:
            return money 
        else:
            return money - a
        """
        :type prices: List[int]
        :type money: int
        :rtype: int
        """