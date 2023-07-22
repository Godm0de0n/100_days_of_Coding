class Solution {
public:
    vector<vector<int>> ans;
    void comb(vector<int> a,int i,int g,int j,int n){
        if(a.size()==g){
            ans.push_back(a);
            return;
        }
        for(int k=n+1;k<=i;k++){
            a.push_back(k);
            comb(a,i,g,j+1,k);
            a.pop_back();
        }

    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> a;
        comb(a,n,k,0,0);
        return ans;
    }
};