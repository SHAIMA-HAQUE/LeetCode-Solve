class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        #nums = nums[-k:]+nums[:len(nums) - k]
        for i in range(k):
            popped = nums.pop()
            nums.insert(0, popped)
        
        