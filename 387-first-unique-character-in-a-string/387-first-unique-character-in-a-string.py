class Solution:
    def firstUniqChar(self, s: str) -> int:
        dict_uniq = dict.fromkeys(s)
        for ch in dict_uniq:
            if s.count(ch) == 1:
                return s.index(ch)
        return -1
            