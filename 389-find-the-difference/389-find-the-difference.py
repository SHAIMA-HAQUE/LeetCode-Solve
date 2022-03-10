class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        s_count, t_count = Counter(s), Counter(t)
        for char in t_count:
            if not s_count[char] == t_count[char]:
                return char