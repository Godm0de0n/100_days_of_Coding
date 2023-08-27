class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans = nums;
        sort(ans.begin(), ans.end());
        
        unordered_map<int, int> m;
        
        for(int i=nums.size()-1; i>=0; i--){
            m[ans[i]] = i;
        }
        for(int i=0; i<nums.size(); i++){
            nums[i] = m[nums[i]];
        }
        return nums;
    }
};