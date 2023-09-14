class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count = 0;

        for (int i=low;i<=high;i++) {
            if (S(i)) {
                count++;
            }
        }

        return count;
    }
    bool S(int num) {
        string numStr = to_string(num);
        int n = numStr.length();

        if (n%2!= 0) {
            return false;
        }

        int sum1= 0 , sum2= 0;
        for (int i=0;i<n/2;i++) {
            sum1 += numStr[i] - '0';
            sum2 += numStr[n-1 - i] - '0';
        }

        return sum1 == sum2;
    }
};