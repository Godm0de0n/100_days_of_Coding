/**
 * @param {number} n
 * @return {number}
 */
var climbStairs = function(n) {
    a = 1
    b = 0
    for (i=1;i< n+1;i++){
        x = a + b
        b = a
        a = x
    }
    return a
};