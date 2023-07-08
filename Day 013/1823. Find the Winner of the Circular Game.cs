public class Solution {
    public int FindTheWinner(int n, int k) {
        int a = 0;
        for(int i = 1; i <= n; i++)
        {
            a = (a + k) % i;
        }
        return a + 1;
    }
}