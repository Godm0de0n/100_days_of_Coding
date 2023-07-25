class Solution {
public:
    int arrangeCoins(long long n) {
        long long l=0;
        long long h=n;
      while(l<=h){
          long long a=l+(h-l)/2;
          long long b = a*(a+1);
          if(b==2*n){
              return a;
          }
          else if(b>2*n){
              h=a-1;
          }
          else{
              l=a+1;
          }
      }
      return h;
    }
};