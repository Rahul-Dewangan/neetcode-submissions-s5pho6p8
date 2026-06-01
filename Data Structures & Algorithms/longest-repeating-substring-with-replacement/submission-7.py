class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        dup = {}
        i, j, ans, mf = 0, 0, float('-inf'), 0

        while(j < len(s)):
            dup[s[j]] = dup.get(s[j], 0) + 1
            mf = max(mf, dup[s[j]])
            
            
            while j-i+1-mf > k:
                dup[s[i]]-=1
                i+=1
                
            ans = max(ans, j-i+1)
            j+=1
        
        return ans