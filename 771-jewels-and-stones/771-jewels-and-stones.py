class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        count = Counter(stones)
        res = 0
        for i in jewels:
            if count[i]:
                res += count[i]
        return res