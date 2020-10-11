class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []
        for token in tokens:
            if token == '+':
                second = stack[-1]
                stack.pop()
                stack[-1] += second
            elif token == '-':
                second = stack[-1]
                stack.pop()
                stack[-1] -= second
            elif token == '*':
                second = stack[-1]
                stack.pop()
                stack[-1] *= second
            elif token == '/':
                second = stack[-1]
                stack.pop()
                stack[-1] = int(stack[-1] / second)
            else:
                stack.append(int(token))
        return stack[-1]

