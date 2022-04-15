class Solution:
    def average(self, salary: List[int]) -> float:
        total_sum = sum(salary)
        mini = min(salary)
        maxi = max(salary)
        return (total_sum - (maxi+mini))/(len(salary)-2)