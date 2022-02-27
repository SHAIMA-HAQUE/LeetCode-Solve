class Solution(object):
    def average(self, salary):
        """
        :type salary: List[int]
        :rtype: float
        """
        avg = (sum(salary) - max(salary) - min(salary))/(len(salary)-2.0)
        return avg