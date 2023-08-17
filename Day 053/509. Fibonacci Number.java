class Solution {
    public int fib(int n) {
        int a = 0;
        int b = 1;
        int s=0;
        
        if (n == 0) {
            return a;
        } else if (n == 1) {
            return b;
        } else {
            for (int i = 2; i <= n; i++) {
                s = a + b;
                a = b;
                b = s;
            }
            return s;
        }
    }
}