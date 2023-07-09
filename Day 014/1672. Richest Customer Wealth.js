/**
 * @param {number[][]} accounts
 * @return {number}
 */
var maximumWealth = function(accounts) {
    r = accounts.length;
    c = accounts[0].length;
    ms =0;
    for ( i =0;i < r;i++){
         s=0;
        for ( j =0;j<c;j++){
            s+=accounts[i][j];
        }
        ms = Math.max (s, ms);
    }
    return ms;
};