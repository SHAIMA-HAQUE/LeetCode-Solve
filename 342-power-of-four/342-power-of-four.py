class Solution:
    def isPowerOfFour(self, n: int) -> bool:
        if n == 0:
            return False
        if n == 1:
            return True
        else:
            if n%4 == 0:
                d = n /4
                return self.isPowerOfFour(d)
            return False