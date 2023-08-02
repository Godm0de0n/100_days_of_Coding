class Solution {
public:
    int lengthOfLastWord(string s) {
        int b = s.size()-1;
        if (b == 0) {
            return 1;
        }
        while (b && s[b] == ' ') {
            b--;
        }
        int a = b;
        while (a > -1 && s[a] != ' ') {
            a--;
        }
        return (b - a);
    }
};