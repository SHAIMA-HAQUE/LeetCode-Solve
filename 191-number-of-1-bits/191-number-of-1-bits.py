class Solution:
    def hammingWeight(self, n: int) -> int:
        c = 0
        for i in range(32):
            if n & (1<<i)!= 0:
                c +=1
        return c