public class Solution {
    public int MaximumWealth(int[][] accounts) {
        int ms = 0;
        for (int i = 0; i < accounts.Length; i++) {
            int s = 0;
            for (int j = 0; j < accounts[i].Length; j++) {
                s += accounts[i][j];
            }
            if (s > ms) {
                ms = s;
            }
        }
        return ms;
    }
}