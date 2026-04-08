class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mi = 0, ans = INT_MIN, pro = 0;
        
         for(int i=mi+1; i<prices.size(); i++)
            {
                pro = prices[i] - prices[mi];
                if(pro < 0) 
                {
                    mi = i;
                    pro = 0;
                }
                ans = max(ans, pro);
            }
            if(ans < 0) ans = 0;

        return ans;
    }
};
