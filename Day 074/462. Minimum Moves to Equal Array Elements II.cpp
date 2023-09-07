class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int ans =0;
        sort(nums.begin(),nums.end());
        int mid = nums.size()/2;
        for (int i = 0;i<nums.size();i++){
            if (nums[i]<nums[mid]){
                ans += nums[mid]-nums[i];
            }
            else if (nums[i]>nums[mid]){
                ans += nums[i]-nums[mid];
            }
        }
        return ans;
    }
};