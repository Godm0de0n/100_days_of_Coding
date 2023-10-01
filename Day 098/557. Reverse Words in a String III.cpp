class Solution {
public:
    string reverseWords(string s) {
        string ans = "", temp;
        for(char ch: s){
            if(ch != ' ') temp += ch;
            else {
                reverse(temp.begin(), temp.end());
                ans += temp + " ";
                temp = "";
            }
        }
        reverse(temp.begin(), temp.end());
        ans += temp;

        return ans;
    }
};