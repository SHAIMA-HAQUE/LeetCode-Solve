class Solution:
    def countEven(self, num: int) -> int:
        n = num
        sum = 0
        while n:
            sum += n%10
            n = n//10
        if sum%2 != 0:
            return (num-1)//2 
        else:
            return num //2