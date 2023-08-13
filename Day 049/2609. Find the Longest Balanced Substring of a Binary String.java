class Solution {
    public int findTheLongestBalancedSubstring(String s) {
        int a = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '0') {
                int zero = 0;
                int one = 0;
                while (i < s.length() && s.charAt(i) == '0') {
                    i++;
                    zero++;
                }
                while (i < s.length() && s.charAt(i) == '1') {
                    i++;
                    one++;
                }
                i--;
                a = Math.max(a, 2 * Math.min(zero, one));
            }
        }
        return a;
    }
}