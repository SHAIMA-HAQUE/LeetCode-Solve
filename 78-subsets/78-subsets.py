class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        #2**len(nums)
        n = len(nums)
        output = [[]]
        
        for num in nums:
            output += [curr + [num] for curr in output]
            
        return output
    
    #Cascading solution