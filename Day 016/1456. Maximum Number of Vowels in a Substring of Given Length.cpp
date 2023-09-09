class Solution {
public:
    int maxVowels(string s, int k) {
        set<char> v={'a','e','i','o','u'};
        int m=0,c=0;
        for (int i=0;i<s.length();i++){
            if (i>=k && v.count(s[i-k])){
                c--;
            }
            if (v.count(s[i])){
                c++;
            }
            m = max(m,c);
        }
        return m;
    }
};