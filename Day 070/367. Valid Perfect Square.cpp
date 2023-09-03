class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num == 1) {
            return true;
        } else {
            long long l = 0;
            long long r = num;
            while (l < r) {
                long long mid = (l + r) / 2;
                if (mid * mid == num) {
                    return true;
                } else if (mid * mid > num) {
                    r = mid;
                } else {
                    l = mid + 1;
                }
            }
            return false;
        }
    }
};