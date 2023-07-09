class Solution {
    public int maximumWealth(int[][] accounts){
        int r = accounts.length;
        int c = accounts[0].length;
        int ms =0;
        for (int i =0;i < r;i++){
            int s=0;
            for (int j =0;j<c;j++){
                s+=accounts[i][j];
            }
            ms = Math.max (s, ms);
        }
        return ms;
    }
}