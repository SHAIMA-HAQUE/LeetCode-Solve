class Solution:
    def backspaceCompare(self, s: str, t: str) -> bool:
        ans_s = []
        ans_t = []
        for ch in s:
            if ch != "#":
                ans_s.append(ch)
            else:
                if ans_s:
                    ans_s.pop()
        for ch in t:
            if ch != "#":
                ans_t.append(ch)
            else:
                if ans_t:
                    ans_t.pop()
        if ans_s == ans_t:
            return True
        else:
            return False
        