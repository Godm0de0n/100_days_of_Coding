public class Solution {
    public int BuyChoco(int[] prices, int money) {
        Array.Sort(prices);
        int a = prices[0]+prices[1];
        return (a>money) ? money : money-a;
    }
}