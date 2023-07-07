class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
    int n = nums.size();
    int r=0;
    int l=0;
    int mi = INT_MAX;
    int ma = INT_MIN;

    for (int i = 0; i < n; i++) {
        ma = max(ma, nums[i]);
        if (ma > nums[i]) {
            r = i;
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        mi = min(mi, nums[i]);
        if (mi < nums[i]) {
            l = i;
        }
    }

    if (l == r) {
        return 0;
    } else {
        return r - l + 1;
    }
    }
};