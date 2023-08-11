class Solution {
    public int commonFactors(int a, int b) {
        int r;
        while(b!=0){
            r = a % b;
            a = b;
            b = r;
        }
        int c=0;
        for (int i = 1;i<=a;i++){
            if (a%i ==0){
                c++;
            }
        }
        return c;
    }
}