class Solution(object):
    def findKthPositive(self, arr, k):
        """
        :type arr: List[int]
        :type k: int
        :rtype: int
        "loe ""
        """
        low = 0
        high = len(arr) - 1
        while low <= high:
            mid = (low + high)//2
            if arr[mid]-mid -1 < k:
                low = mid + 1
            else:
                high = mid - 1
        return low + k