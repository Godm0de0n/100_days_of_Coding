class Solution(object):
    def findUnsortedSubarray(self, nums):
        r =0
        l =0
        n= len(nums)
        mi = nums[n-1]
        ma = nums[0]

        for i in range(n):
            ma = max(ma, nums[i])
            if ma > nums[i]:
                r = i

        for i in range(n - 1, -1, -1):
            mi = min(mi, nums[i])
            if mi < nums[i]:
                l = i

        if l == r:
            return 0
        else:
            return r - l + 1 
        """
        :type nums: List[int]
        :rtype: int
        """