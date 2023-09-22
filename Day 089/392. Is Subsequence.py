class Solution(object):
    def isSubsequence(self, s, t):
        a = len(s)
        b = len(t)

        i = 0
        j = 0
        while i < a and j < b:
            if s[i] == t[j]:
                i += 1
            j += 1
        return i == a