class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> left(nums.size());
        vector<int> right(nums.size());
        vector<int> ans(nums.size());

        left[0] = 0;
        for (int i = 1; i < left.size(); i++) {
            left[i] = nums[i - 1] + left[i - 1];
        }

        right[nums.size() - 1] = 0;
        for (int j = nums.size() - 2; j >= 0; j--) {
            right[j] = nums[j + 1] + right[j + 1];
        }

        for (int i = 0; i < ans.size(); i++) {
            ans[i] = abs(left[i] - right[i]);
        }

        return ans;
    }
};