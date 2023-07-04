class Solution {
    public int prime(int m){
        int a = 0;
        for (int i=2;m>1;i++){
            while(m%i==0){
                a+=i;
                m/=i;
            }
        }
        return a;
    }
    public int smallestValue(int n) {
        int a= prime(n);
        if (a == n){
            return a;
        }
        else{
            return smallestValue(a);
        }
    }
}