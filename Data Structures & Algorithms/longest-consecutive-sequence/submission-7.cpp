class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // using set
        unordered_set<int> seq;
        int count = 0, maxc = 0; 
        for(int i=0; i<nums.size(); i++)
            seq.insert(nums[i]);
        
        for(int i=0; i<nums.size(); i++)
        {
            int ele = nums[i];
            if(seq.find(ele - 1) == seq.end())
                {while(seq.find(ele) != seq.end())
                {
                    count++;
                    ele = ele + 1;
                }}   
                maxc = max(maxc, count);
                count = 0;
        }
        
    return maxc;
    }
   
    
};
