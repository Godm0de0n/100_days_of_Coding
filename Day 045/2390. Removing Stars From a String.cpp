class Solution {
public:
    string removeStars(string s) {      
        int c = 0;
        vector<bool> v(s.size());
        for(int i=s.size()-1; i>=0; i--) {
            if(s[i] == '*') {
                c++;
            }
            else if(c > 0) {
                c--;
            }
            else {
                v[i] = 1;
            }
        }
        string ans;
        for(int i=0; i<s.size(); i++){
            if(v[i]){
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};