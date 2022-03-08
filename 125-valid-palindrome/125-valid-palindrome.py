class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = s.lower()
        s = ''.join(x for x in s if x.isalpha() or x.isnumeric())
        if s == '':
            return True
        else:
            left,right = 0,len(s)-1
        while left <= right:
            if s[left]!=s[right]:
                return False
            else:
                left+=1
                right-=1
        return True
                
        
    