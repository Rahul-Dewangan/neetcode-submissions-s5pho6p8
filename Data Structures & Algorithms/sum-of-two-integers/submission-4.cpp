class Solution {
public:
    vector<bool> get_binary(int n){
        vector<bool> bin_rep(31, 0);
        for(int i=0; i<32; i++){
            bin_rep[31-i] = (1 & n) ? 1:0;
            n = n>>1;
            }
        return bin_rep;
    }
    int getSum(int a, int b) {

        vector<bool> binA, binB;
        vector<bool> ans(31, 0);
        binA = get_binary(a);
        binB = get_binary(b);
        for(int i = 0; i<32; i++){
            cout<<binA[i];
        }
        cout<<endl;
        for(int i = 0; i<32; i++){
            cout<<binB[i];
        }
        bool carry = 0;
        for(int i = 31; i>=0; i--){
            bool sum = binA[i] ^ binB[i];
            sum = sum ^ carry;
            carry = (binA[i] & binB[i]) | (binA[i] & carry) | (carry & binB[i]);
            ans[i] = sum; 
        }
        cout<<endl;
        for(int i = 0; i<32; i++){
            cout<<ans[i];
        }

        int answer = 0;
        for(int i=31; i>=0; i--){
            answer += (1<<(31-i))*ans[i];
        }

        return answer;
    }
};















