class Solution(object):
    def cal(self, p1, p2):
        return (p1[0] - p2[0]) ** 2 + (p1[1] - p2[1]) ** 2
    def validSquare(self, p1, p2, p3, p4):
        l1 = self.cal(p1, p2)
        l2 = self.cal(p2, p3)
        l3 = self.cal(p3, p4)
        l4 = self.cal(p4, p1)
        d1 = self.cal(p1, p3)
        d2 = self.cal(p2, p4)
        s = set([l1, l2, l3, l4, d1, d2])
        
        if l1 == 0 or l2 == 0 or l3 == 0 or l4 == 0 or d1 == 0 or d2 == 0:
            return False

        return len(s) == 2
        """
        :type p1: List[int]
        :type p2: List[int]
        :type p3: List[int]
        :type p4: List[int]
        :rtype: bool
        """