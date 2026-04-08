class MinStack:

    def __init__(self):
        self.stack = []
        self.mstack = []

    def push(self, val: int) -> None:
        self.stack.append(val)
        if len(self.mstack) == 0:
            self.mstack.append(val)
        elif self.mstack[-1] >= val:
            self.mstack.append(val)

    def pop(self) -> None:
        if self.stack[-1] == self.mstack[-1]:
            self.mstack.pop()
            self.stack.pop()
        else:
            self.stack.pop()

    def top(self) -> int:
        return self.stack[-1]

    def getMin(self) -> int:
        return self.mstack[-1]
        
