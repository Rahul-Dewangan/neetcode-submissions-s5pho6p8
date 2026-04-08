class Solution:
    from collections import deque

    def isValid(self, s: str) -> bool:
        stack = deque()
        stack.append('z')

        for c in s:
            if c == '(':
                stack.append(')')
            elif c == '{':
                stack.append('}')
            elif c == '[':
                stack.append(']')
            
            elif c == stack[-1]:
                stack.pop()

            elif c != stack[-1]:
                return False
        
        if len(stack) != 1:
            return False
        else:
            return True

            