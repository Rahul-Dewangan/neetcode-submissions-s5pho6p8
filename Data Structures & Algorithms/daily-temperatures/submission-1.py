class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        ans = []
        stack = []
        istack = []

        for i in range(len(temperatures)-1, -1, -1):
            if len(stack) == 0:
                ans.append(-1)
            elif stack[-1] > temperatures[i]:
                ans.append(istack[-1])
            else:
                while len(stack) != 0 and stack[-1] <= temperatures[i]:
                    stack.pop()
                    istack.pop()
                
                if len(stack) == 0:
                    ans.append(-1)
                else:
                    ans.append(istack[-1])
            
            stack.append(temperatures[i])
            istack.append(i)
        
        ans.reverse()
        # print(ans)
        res = []
        for i in range(0, len(temperatures)):
            if ans[i] - i < 0:
                res.append(0)
            else: 
                res.append(ans[i] - i)

        return res