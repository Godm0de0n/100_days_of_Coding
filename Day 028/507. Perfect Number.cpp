class Solution {
public:
    int total(int n){
        int a=0;
        for (int b=2;b<(n/2+1);b++){
            if (n%b==0){
                a+=b;
            }
        }
        return a+1;
    }
    bool checkPerfectNumber(int num) {
        if (num==1) return false;
        return (num==total(num));
    }
};