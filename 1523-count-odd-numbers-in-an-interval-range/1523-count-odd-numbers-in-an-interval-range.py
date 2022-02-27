class Solution(object):
    def countOdds(self, low, high):
        """
        :type low: int
        :type high: int
        :rtype: int
        """
        if high%2 != 0 and low%2 != 0:
            c = (high - low)//2 + 1
        elif high %2 == 0 and low %2 == 0:
            c = (high - low)//2
        else:
            c = (high-low)//2 + 1
        
        return c