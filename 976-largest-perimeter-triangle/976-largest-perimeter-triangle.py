class Solution:
    def largestPerimeter(self, nums: List[int]) -> int:
        nums.sort(reverse= True)
        for i in range(2, len(nums)):
            a,b,c = nums[i-2], nums[i-1], nums[i]
            if b+c > a:
                return a+b+c
        return 0