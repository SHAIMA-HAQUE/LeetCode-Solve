class MinStack:

    def __init__(self):
        self.stack = []
        self.min = []

    def push(self, val: int) -> None:
        self.stack.append(val)
        if not self.min or self.getMin() >= val:
            self.min.append(val)
        else:
            self.min.append(self.min[-1])

    def pop(self) -> None:
        x = self.stack.pop()
        self.min.pop()
        return x

    def top(self) -> int:
        return self.stack[-1]

    def getMin(self) -> int:
        return self.min[-1]

# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(val)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()