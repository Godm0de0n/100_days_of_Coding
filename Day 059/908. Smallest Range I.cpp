class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int mx = INT_MIN;
        int mn = INT_MAX;
        for (int i =0;i<nums.size();i++){
            mx = max(mx,nums[i]);
            mn = min(mn,nums[i]);
        }
        return max(0,((mx-k)-(mn+k)));
    }
};