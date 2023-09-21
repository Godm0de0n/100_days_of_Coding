class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged;
        int i = 0, j = 0;
        while (i < nums1.size()) {
            merged.push_back(nums1[i]);
            i++;
        }
        while (j < nums2.size()) {
            merged.push_back(nums2[j]);
            j++;
        }
        sort(merged.begin(),merged.end());
        int n = merged.size();
        if (n % 2 == 0) {
            return (double)(merged[n / 2 - 1] + merged[n / 2]) / 2.0;
        } else {
            return (double)merged[n / 2];
        }
    }
};