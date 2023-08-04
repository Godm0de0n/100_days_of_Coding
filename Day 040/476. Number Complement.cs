public class Solution {
    public int FindComplement(int num) {
        int ans = 0;
        int a = 1;
        while (num > 0) {
            if ((num & 1) == 0) {
                ans += a;
            }
            a *= 2;
            num >>= 1;
        }
        return ans;
    }
}