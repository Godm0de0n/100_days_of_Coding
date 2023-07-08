/**
 * @param {number} n
 * @param {number} k
 * @return {number}
 */
var findTheWinner = function(n, k) {
    a = 0;
        for(i = 1; i <= n; i++)
        {
            a = (a + k) % i;
        }
        return a + 1;
};