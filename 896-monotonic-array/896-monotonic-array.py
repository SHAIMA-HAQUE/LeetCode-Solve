class Solution:
    def isMonotonic(self, nums: List[int]) -> bool:
        length = len(nums)
        if nums == sorted(nums) or nums == sorted(nums, reverse = True):
            return True
        else:
            return False
