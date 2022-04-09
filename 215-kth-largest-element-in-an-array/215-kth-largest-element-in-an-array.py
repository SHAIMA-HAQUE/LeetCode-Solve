class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        # nums = list(set(nums))
        # print(nums)
        nums.sort()
        return nums[-k]
        