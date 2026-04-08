class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0, r = heights.size() - 1;
        int maxa = 0, area = 0, a = 0, b = 0;
        
        while(l < r)
        {
            a = min(heights[l], heights[r]);
            b = r - l;
            area = a * b;
            maxa = max(area, maxa);

            if(heights[l] < heights[r]) l++;

            else r--;
        }

        return maxa;
        
    }
};
