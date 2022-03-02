class Solution:
    
        
    def arraySign(self, nums: List[int]) -> int:
        pdt = 1
        for i in range(len(nums)):
            pdt = pdt * nums[i]
        return signFunc(pdt)
def signFunc(x):
    if x > 0:
        return 1
    elif x<0:
        return -1
    else:
        return 0