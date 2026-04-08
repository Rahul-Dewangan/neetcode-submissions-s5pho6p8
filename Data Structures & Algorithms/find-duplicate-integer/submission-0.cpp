class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> un;
        for(int i=0; i<nums.size(); i++){
            un[nums[i]]++;

            if(un[nums[i]] == 2) return nums[i];
        }
        return 0;
    }
};
