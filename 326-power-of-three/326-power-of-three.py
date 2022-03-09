class Solution:
    def isPowerOfThree(self, n: int) -> bool:
        if n==0:
            return False
        if n==1:
            return True
        else:
            if n%3 == 0:
                d = n/3
                return self.isPowerOfThree(d)
            return False
                