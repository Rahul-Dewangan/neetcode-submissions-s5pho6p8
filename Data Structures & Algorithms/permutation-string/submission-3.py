class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        r1 = ''.join(sorted(s1))
        # freq = {}
        # for i in s1:
        #     freq[i] = freq.get(i, 0)+1
        
        j, k, z = 0, 0, len(s1)

        while(j < len(s2)):
            if j-k+1 < z:
                j+=1
            elif j-k+1 == z:
                s = s2[k:j+1]
                r2 = ''.join(sorted(s))
                if r1 == r2:
                    return True
                else:
                    k+=1
                    j+=1
        
        return False

        
