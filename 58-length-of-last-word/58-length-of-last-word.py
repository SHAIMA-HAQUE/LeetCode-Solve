class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        l = 0
        st = s.strip()
        for i in range(len(st)):
            if st[i] == ' ':
                l = 0
            else:
                l += 1
        return l   