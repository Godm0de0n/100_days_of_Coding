class Solution {
public:
    int f(int n){
        int a =1;
        int b=2;
        int x;
        for (int i =2;i<n;i++){
            x = a +b;
            a=b;
            b=x;
        }
        return x;
    }
    int climbStairs(int n) {
        if (n==1){
            return 1;
        }
        else if (n==2){
            return 2;
        }
        else{
            return f(n);
        }
    }
};