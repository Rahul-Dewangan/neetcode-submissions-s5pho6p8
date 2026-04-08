class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        cout<<"HI";
        int ind1 = 0, ind2 = nums.size() - 1;
        vector<int> ans;
        while(ind1 < ind2)
        {
            if((nums[ind1] + nums[ind2]) == target)
            {
                ans.push_back(ind1 + 1);
                ans.push_back(ind2 + 1);
                break;
            }
            else if((nums[ind1] + nums[ind2]) < target)
            ind1++;

            else ind2--;
        }

        return ans;
    }
};
