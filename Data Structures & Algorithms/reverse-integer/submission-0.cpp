class Solution {
public:
    int reverse(int x) {
        long result = 0;
        int n = abs(x);
        while(n!=0){
            result = (result * 10) + (n % 10);
            n = n/10;
            
            if (result > INT_MAX || result < INT_MIN)
                return 0;
            

        }
        result = (x >= 0) ? result : -result;
        return static_cast<int>(result);
    }
};
