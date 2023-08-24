class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int> s;
        vector<int>ans;
        int t=nums.size();
        for(int i=1; i<=t; i++){
            s.insert(i);
        }
        for(auto x:nums){
            s.erase(x);
        }
        for(auto x:s){
            ans.push_back(x);
        }
        return ans;
    }
};