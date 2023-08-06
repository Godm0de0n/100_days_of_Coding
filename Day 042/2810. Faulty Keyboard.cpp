class Solution {
public:
    string reverseStr(string& str) {
        int n = str.length();
        for (int i = 0; i < n / 2; i++)
            swap(str[i], str[n - i - 1]);
        return str;
    }
    
    string finalString(string s) {
        string s1;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'i') {
                s1 = reverseStr(s1);
            } else {
                s1.push_back(s[i]);
            }
        }
        return s1;
    }
};