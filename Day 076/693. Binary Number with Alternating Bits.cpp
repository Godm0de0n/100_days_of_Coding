class Solution {
public:
    bool hasAlternatingBits(int n) {
        vector<int> ans;
        while(n!=0){
            ans.push_back(n%2);
            n/=2;
        }
        for(int i = 0 ; i< ans.size()-1; i++){
            if(ans[i+1] == ans[i]){
                return false;
            }
        }
        return true;
    }
};