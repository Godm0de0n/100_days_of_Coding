class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int l = s.size();
        int j=0;
        for(int i=0; i<l; i++){
            if(s[i]=='1'){
                swap(s[i],s[j]);
                j++;
            }
        }
        swap(s[j-1],s[l-1]);
        return s;
    }
};