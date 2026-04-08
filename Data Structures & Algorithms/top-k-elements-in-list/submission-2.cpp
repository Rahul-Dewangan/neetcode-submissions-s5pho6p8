class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> topk;
        vector<int> ans(k);
        int n = nums.size();
        for(int i=0; i<n; i++)
        {
            topk[nums[i]]++;
        }

        // for(auto &pr: topk)
        // {
        //     cout<<pr.first<<" "<<pr.second<<endl;
        // }
        vector<pair<int, int>> vec(topk.begin(), topk.end());
        sort(vec.begin(), vec.end(), [](pair<int, int>& a, pair<int, int>& b) {
        return a.second > b.second; // use > for descending
    });

        // map<int, int> :: iterator it;
        // it = topk.begin();
        
        for(int j=k-1, k=0; j>=0; j--)
        {
            
            ans[j] = vec[k].first;
            k++;
        }
        return ans;
    }
};
