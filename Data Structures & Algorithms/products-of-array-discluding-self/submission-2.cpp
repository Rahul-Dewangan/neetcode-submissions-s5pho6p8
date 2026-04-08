class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int prod = 1, f = 0;
        
        for(int i = 0; i<nums.size(); i++)
        {
            if(nums[i] == 0)
              f += 1;
            
            if(nums[i] != 0)
            prod = prod * nums[i];
        }

        cout<<prod;
        for(int i = 0; i<nums.size(); i++)
        {
            if(f >= 1)
            {
                if(f >=2 )
                    ans.push_back(0);
                else{
                if(nums[i] == 0)
                    ans.push_back(prod);
                else 
                    ans.push_back(0);
                }
            } 

            else
             ans.push_back(prod/nums[i]);
        }
        return ans;

    }
};
