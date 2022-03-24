class Solution:
    def hammingWeight(self, n: int) -> int:
#         c = 0
#         for i in range(32):
#             if n & (1<<i)!= 0:
#                 c +=1
#         return c
        c = 0
        while n>0:
            if n&1 > 0:
                c += 1
            n = n >> 1
        return c
