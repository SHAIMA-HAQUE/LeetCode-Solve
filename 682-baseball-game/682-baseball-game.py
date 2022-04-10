class Solution:
    def calPoints(self, ops: List[str]) -> int:
        ans = []
        for i in range(len(ops)):
            if ops[i] == "+":
                ans.append(ans[-1] + ans[-2])
            elif ops[i] == "D":
                ans.append(2*ans[-1])
            elif ops[i] == "C":
                ans.pop()
            else:
                ans.append(int(ops[i]))
        return sum(ans)
                