class Solution {
public:
    int minBitFlips(int start, int goal) {
        int n= (start^goal);
        int ans=0;

        while(n){
            if(n&1==1){
                ans++;
            }
            n=n/2;
        }
        return ans;
    }
};