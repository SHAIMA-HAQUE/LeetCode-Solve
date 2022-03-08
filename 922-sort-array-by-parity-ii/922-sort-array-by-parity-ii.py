class Solution:
    def sortArrayByParityII(self, nums: List[int]) -> List[int]:
        list = []
        even = 0
        odd = 1
        for i in range(len(nums)):
            if nums[i] %2 == 0:
                list.insert(even, nums[i])
                even += 2
            else:
                list.insert(odd, nums[i])
                odd += 2
        return list