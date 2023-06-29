class Solution {
public:
    bool isSubsequence(string s, string t) {
        int a = s.length();
        int b = t.length();
        int i=0;
        for (int j=0; i<a and j<b ;j++){
            if (s[i]==t[j]){
                i++;
            }
        }
        if (i==a){
            return true;
        }
        else{
            return false;
        }
    }
};