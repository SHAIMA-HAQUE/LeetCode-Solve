class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        nums = list(set(nums)) # O(N)
        if len(nums)<3:
            return max(nums)
        else:
            nums.remove(max(nums))
            nums.remove(max(nums))
            return max(nums)
            