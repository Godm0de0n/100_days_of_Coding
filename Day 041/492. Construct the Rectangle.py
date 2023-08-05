class Solution(object):
    def constructRectangle(self, area):
        m = int(math.sqrt(area))
        for i in range (m,0,-1):
            if (area % i ==0):
                return [area/i,i]
        """
        :type area: int
        :rtype: List[int]
        """
        """
        :type area: int
        :rtype: List[int]
        """