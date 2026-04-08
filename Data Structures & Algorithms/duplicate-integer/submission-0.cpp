class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool ans = false;
        sort(nums.begin(), nums.end());
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i-1] == nums[i])
            {
                ans = true;
                break;
            }

            else continue;
        }
        return ans;
    }
};