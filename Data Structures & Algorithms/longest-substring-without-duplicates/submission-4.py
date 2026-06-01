class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if len(s) == 0 or len(s) == 1:
            return len(s)

        dupdict = {}
        i, j, curr = 0, 0, 0
        ans = float('-inf')

        while(j < len(s)):
            dupdict[s[j]] = dupdict.get(s[j], 0) + 1
            if dupdict[s[j]] > 1:
                while dupdict[s[j]] > 1:
                    dupdict[s[i]]-=1
                    i+=1
                    curr = 0

            curr = j-i+1
            ans = max(curr, ans)
            j+=1
        
        return ans
