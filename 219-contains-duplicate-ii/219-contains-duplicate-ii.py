class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        d = {}
        for i, n in enumerate(nums):
            if n in d:
                if abs(d[n] - i) <= k:
                    return True
                d[n] = i
            else:
                d[n] = i
        return False