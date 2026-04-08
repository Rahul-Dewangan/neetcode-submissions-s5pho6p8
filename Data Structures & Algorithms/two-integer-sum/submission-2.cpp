class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        vector<vector<int>> dict(nums.size(), vector<int>(2));
        for(int k=0; k<nums.size(); k++)
        {
            dict[k][0] = nums[k];
            dict[k][1] = k;
        }
        sort(dict.begin(), dict.end());

        int i = 0, j = nums.size()-1;
        
        while(i<j)
        {
            if(dict[i][0] + dict[j][0] == target)
            {
                ans.push_back(dict[i][1]);
                ans.push_back(dict[j][1]);
                break;
            }
            else if(dict[i][0] + dict[j][0] < target)
             i++;
            
            else j--;              
        }
        sort(ans.begin(), ans.end());

        return ans;
        
    }
};
