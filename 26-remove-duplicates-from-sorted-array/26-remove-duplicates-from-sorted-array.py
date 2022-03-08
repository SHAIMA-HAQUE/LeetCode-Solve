class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        slow=0
        count=1 #number of elements
        for fast in range(len(nums)):
            if nums[fast]!=nums[slow]:
                slow+=1
                count+=1
                nums[slow]=nums[fast]
        
        return count
                
                
            
           