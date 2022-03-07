class Solution:
    def prefixCount(self, words: List[str], pref: str) -> int:
        c = 0
        for i in range(len(words)):
            if pref in words[i][0:len(pref)]:
                c+=1
        return c