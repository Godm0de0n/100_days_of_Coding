class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        int a = 0;
        for (int i =0;i<s.size();i++){
            if (s[i]=='0'){
                int zero =0;
                int one =0;
                while(i<s.size() && s[i]=='0'){
                    i++;
                    zero++;
                }
                while(i<s.size() && s[i]=='1'){
                    i++;
                    one++;
                }
                i--;
                a = max (a, 2* min(zero,one));
            }
        }
        return a;
    }
};