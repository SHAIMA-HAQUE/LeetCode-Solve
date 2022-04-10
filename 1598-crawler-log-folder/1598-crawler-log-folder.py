class Solution:
    def minOperations(self, logs: List[str]) -> int:
        ans = []
        for op in logs:
            if op == "../":
                if ans:
                    ans.pop()
            elif op != "./":
                ans.append(op)
        return len(ans)