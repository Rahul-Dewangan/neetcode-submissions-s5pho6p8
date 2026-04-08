class Solution {
public:
    int countBit(int num){
        int res = 0;
        for(int i=0; i<32; i++){
            res += (num & 1)? 1: 0;
            num = num>>1;
        }
        return res;
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0; i<=n; i++){
            int res = countBit(i);
            ans.push_back(res);
        }
        return ans;
    }
};
