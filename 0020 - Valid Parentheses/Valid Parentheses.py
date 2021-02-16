class Solution:
    def isValid(self, s: str) -> bool:
        if len(s) == 0:
            return True
        stack = []
        for c in s:
            if c in ('(', '[', '{'):
                stack.append(c)
            else:
                if len(stack) == 0:
                    return False
                
                if c == ')':
                    c = '('
                elif c == ']':
                    c = '['
                elif c == '}':
                    c = '{'
                if stack[-1] == c:
                    stack.pop()
                else:
                    return False
        return len(stack) == 0

