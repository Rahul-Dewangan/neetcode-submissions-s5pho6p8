class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t nums = n;
        uint32_t ans = 0;
        vector<bool> binary(32, 0);
        for(int i=0; i<32; i++){
            int res = (nums & 1) ? 1:0;
            binary[i] = res;
            nums = nums>>1;
            cout<<res;
        }

        // reverse(binary.begins(), binary.end())
        for(int i=0; i<32; i++){
            ans += (1<<(31-i)) * binary[i];
        }
        return ans;
    }
};
