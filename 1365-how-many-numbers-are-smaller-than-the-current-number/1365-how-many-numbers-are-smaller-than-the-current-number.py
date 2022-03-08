class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        list = []
        for i in range(len(nums)):
            c = 0
            for j in range(len(nums)):
                if nums[j] < nums[i]:
                    c += 1
            list.append(c)
        return list