class Solution(object):
    def thirdMax(self, nums):
        nums.sort(reverse=True)
        i = 1
        while i < len(nums):
            if nums[i] == nums[i - 1]:
                nums.pop(i)
            else:
                i += 1
        if len(nums)==1:
            return nums[0]
        elif len(nums)==2:
            return max(nums[0], nums[1])
        else:
            return nums[2]