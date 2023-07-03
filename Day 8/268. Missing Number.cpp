class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int t = 1;
        
        if (nums[0] != 0) {
            return 0;
        }
        else {
            while (t < nums.size() && (nums[t] - nums[t - 1]) == 1) {
                t++;
            }
            return nums[t - 1] + 1;
        }
    }
};

