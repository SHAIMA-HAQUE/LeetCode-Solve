class Solution:
    def maxProduct(self, words: List[str]) -> int:
        masks=[]
        n=len(words)
        for word in words:
            mask=0
            for w in word:
                bit=ord(w)-ord('a')
                mask |= (1<<bit)
            masks.append(mask)
        ans=0

        for i in range(n-1):
            for j in range(i+1, n):
                if masks[i] & masks[j] == 0:
                    ans = max(ans, len(words[i]) * len(words[j]))
        return ans