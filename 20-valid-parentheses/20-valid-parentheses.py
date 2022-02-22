class Solution:
    def isValid(self, s: str) -> bool:
        stack = Stack()
        is_balanced = True
        index = 0

        while index < len(s) and is_balanced:
            paren = s[index]
            if paren in "({[":
                stack.push(paren)
            else:
                if stack.is_empty():
                    is_balanced = False
                    break
                else:
                    top = stack.pop()
                    if not is_match(top,paren):
                        is_balanced = False
                        break
            index += 1
        if stack.is_empty() and is_balanced:
            return True
        else:
            return False
        
def is_match(p1, p2):
    if p1 == "(" and p2 == ")":
        return True
    elif p1 == "{" and p2 == "}":
        return True
    elif p1 == "[" and p2 == "]":
        return True
    else:
        return False        
        
        
class Stack:
    def __init__(self):
        self.items = []
    def push(self, item):
        self.items.append(item)
    def pop(self):
        return self.items.pop()
    def get_stack(self):
        return self.items
    def is_empty(self):
        return self.items == []
    def peek(self):
        if not self.is_empty():
            return self.items[-1]

        