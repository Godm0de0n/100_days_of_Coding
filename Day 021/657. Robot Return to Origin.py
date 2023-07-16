class Solution(object):
    def judgeCircle(self, moves):
        x , y = 0, 0
        for i in moves:
            if i == "U":
                x += 1
            elif i == "D":
                x -= 1
            elif i == "R":
                y += 1
            elif i == "L":
                y -= 1
        if x == 0 and y == 0:
            return True
        return False
        """
        :type moves: str
        :rtype: bool
        """

"""One liner"""

class Solution:
    def judgeCircle(self, moves: str) -> bool:
        return (moves.count('U') == moves.count('D') and moves.count('R') == moves.count('L'))