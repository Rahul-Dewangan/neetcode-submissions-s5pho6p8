class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            if(i != nums[i]){
                ans = i;
                break;
            }
            else continue;
        }
        return ans;

    }
};
