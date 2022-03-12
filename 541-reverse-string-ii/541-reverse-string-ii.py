class Solution:
    def reverseStr(self, s: str, k: int) -> str:
        out = ''
        reverse = True
        for i in range(0, len(s)+1, k):
            out += s[i:i+k][::-1 if reverse else 1]
            reverse = not reverse
        return out