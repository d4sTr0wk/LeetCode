class Solution(object):
    def twoSum(self, nums, target):
        for i, num in enumerate(nums):
            complement = target - num
            if (complement in nums) and (nums.index(complement) != i):
                return [i, nums.index(complement)]
        return None
