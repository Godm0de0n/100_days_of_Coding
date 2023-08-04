/**
 * @param {number} num
 * @return {number}
 */
var findComplement = function(num) {
    ans = 0;
        a = 1;
        while (num > 0) {
            if ((num & 1) == 0) {
                ans += a;
            }
            a *= 2;
            num >>= 1;
        }
        return ans;
};
        