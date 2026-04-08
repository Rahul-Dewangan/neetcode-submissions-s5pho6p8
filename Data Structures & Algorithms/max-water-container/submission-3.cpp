class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0, r = heights.size() - 1;
        int maxa = 0;
        
        while(l < r)
        {
            maxa = max(min(heights[l], heights[r]) * (r - l), maxa);

            if(heights[l] < heights[r]) l++;

            else r--;
        }

        return maxa;
        
    }
};
