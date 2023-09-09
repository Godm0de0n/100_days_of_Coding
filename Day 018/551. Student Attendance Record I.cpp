class Solution {
public:
    bool checkRecord(string s) {
        int maxL=0;
        int A=0;
        int L=0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == 'L') {
                L++;
            } else {
                L = 0;
            }
            if (s[i] == 'A') {
                A++;
            }
            if (maxL < L) {
                maxL = L;
            }
            if( A >= 2 || maxL >= 3) {
                return false;
            }
        }
        return true;
    }
};