class Solution:
    def addBinary(self, a: str, b: str) -> str:
        al, bl = -len(a), -len(b)
        i,carry, res = -1, 0, ""
        
        while i>=al or i>=bl:
            aBit = int(a[i]) if i >= al else 0
            bBit = int(b[i]) if i >= bl else 0
            
            sum = aBit + bBit + carry
            res = str(sum % 2) + res
            carry = sum // 2

            i -= 1
            
        return "1" + res if carry else res