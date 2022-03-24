class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        # if n == 0:
        #     return False
        # if n == 1:
        #     return True
        # else:
        #     if n%2 == 0:
        #         return self.isPowerOfTwo(n/2)
        # return False
        
        #Integer will always contain a single set bit
        c = 0
        while n>0:
            c += 1
            n = n & (n-1)
        if c == 1:
            return True
        else:
            return False