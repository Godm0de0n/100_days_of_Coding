class Solution {
public:
    int findComplement(int num) {
        long long ans = 0;
        long long a = 1;
        while (num > 0) {
            if ((num & 1) == 0) {
                ans += a;
            }
            a *= 2;
            num >>= 1;
        }
        return ans;
    }
};