class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        int a;
        for (int i =0;i<t.size();i++){
            if (t[i]!=s[i]){
                a=i;
                break;
            }
        }
        return t[a];
    }
};