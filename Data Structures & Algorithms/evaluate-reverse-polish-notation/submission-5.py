class Solution:
    import math
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []
        for c in tokens:
            
            if c == '+':
                op1 = stack.pop()
                op2 = stack.pop()
                stack.append(op1 + op2)

            elif c == '-':
                op1 = stack.pop()
                op2 = stack.pop()
                stack.append(op2 - op1)

            elif c == '*':
                op1 = stack.pop()
                op2 = stack.pop()
                stack.append(op1 * op2)

            elif c == '/':
                op1 = stack.pop()
                op2 = stack.pop()
                fl = 0
                if op1 < 0 or op2 < 0:
                    fl = 1
                ans = abs(op2) // abs(op1)
                if fl == 1:
                    ans = 0-ans
                stack.append(ans)
            else:
                stack.append(int(c))
            
            print(stack[-1])
        print(type(stack[-1]))
        return stack[-1]