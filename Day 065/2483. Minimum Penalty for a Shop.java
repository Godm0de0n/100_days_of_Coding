class Solution {
    public int bestClosingTime(String customers) {
        int s = 0;
        int ms = 0;     
        int ans = -1;   

        for (int i = 0; i < customers.length(); i++) {
            if (customers.charAt(i) == 'Y') {
                s += 1;
            } else {
                s -= 1;
            }
            if (s > ms) {
                ms = s;
                ans = i;
            }
        }
        return ans + 1;
    }
}