class Solution:
    def duplicateZeros(self, arr: List[int]) -> None:
        """
        Do not return anything, modify arr in-place instead.
        """
        length = 0
        for i in range(len(arr)):
            if length < len(arr):
                if arr[length] == 0:
                    arr.pop()
                    arr.insert(length+1,0)
                    length += 2
                else:
                    length += 1
        return arr