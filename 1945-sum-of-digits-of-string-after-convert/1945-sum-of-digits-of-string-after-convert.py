class Solution:
    def getLucky(self, s: str, k: int) -> int:
        values = (ord(v) - ord('a') + 1 for v in s)
        n = int(''.join(map(str, values)))
        for i in range(k):
            n = sum(int(d) for d in str(n))
        return n