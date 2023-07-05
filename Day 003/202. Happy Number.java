class Solution {
    public boolean isHappy(int n) {
        int sum = n;
        while(sum != 1 && sum !=4){
            int t = sum;
            sum = 0;
            while(t!=0){
                int d=t%10;
                sum += d*d;
                t/= 10;
            }
        }
        return sum ==1;
    }
}