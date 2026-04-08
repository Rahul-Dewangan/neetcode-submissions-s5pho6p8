class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        
        sort(nums.begin(), nums.end());
        int count = 1, maxc = INT_MIN;
        for(int i=0; i<nums.size() - 1; i++)
        {
            if(nums[i] == nums[i+1])
                continue;
            
            else if(nums[i] == nums[i+1]-1)
                count++;
            
            else 
            {maxc = max(count, maxc);
             count = 1;
            }
        }
        maxc = max(count, maxc);

        return maxc;
    }
};
