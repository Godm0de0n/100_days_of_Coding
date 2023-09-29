class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool in = true;
        bool de = true;

        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] > nums[i - 1]) {
                de = false;
            } else if (nums[i] < nums[i - 1]) {
                in = false;
            }

            if (!(in || de)) {
                return false;
            }
        }
        return true;
    }
};