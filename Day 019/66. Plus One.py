class Solution(object):
    def plusOne(self, digits):
        n = len(digits)
        digits[n-1] += 1
        for i in range(n-1, 0, -1):
            if digits[i] == 10:
                digits[i] = 0
                digits[i-1] += 1
            else:
                break
        if digits[0] == 10:
            digits[0] = 0
            digits.insert(0, 1)
        return digits
        """
        :type digits: List[int]
        :rtype: List[int]
        """



        """One liner"""

class Solution(object):
    def plusOne(self, digits):
        return [int(x) for x in str(int(''.join(map(str, digits))) + 1)]
        """
        :type digits: List[int]
        :rtype: List[int]
        """