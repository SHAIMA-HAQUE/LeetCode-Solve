class Solution:
    def isHappy(self, n: int) -> bool:
        set = {n}
        while n!= 1:
            n = int(sum(int(d)**2 for d in str(n)))
            if n in set:
                return False
            set.add(n)
        
        return True