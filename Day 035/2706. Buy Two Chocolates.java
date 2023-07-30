class Solution {
    public int buyChoco(int[] prices, int money) {
        Arrays.sort(prices);
        int a = prices[0]+prices[1];
        return (a>money) ? money : money-a;
    }
}