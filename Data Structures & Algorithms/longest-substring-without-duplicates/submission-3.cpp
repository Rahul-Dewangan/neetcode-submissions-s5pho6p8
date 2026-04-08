class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> um;
        int ans = 0, count = 0, ptr = 0;
        for(int i=0; i<s.size(); i++)
        {
            um[s[i]]++;
            if(um[s[i]] > 1)
            {
                ans = max(ans, count);
                count = -1;
                i = ptr++;
                um.clear();
            }
            count++;
        }
        ans = max(ans, count);
        return ans;
    }
};
