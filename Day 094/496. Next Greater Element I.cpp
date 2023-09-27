class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int, int> next;

        vector<int> v;

        for (int i = 0; i < nums2.size(); ++i) {
            int current = nums2[i];
            while (!v.empty() && current > nums2[v.back()]) {
                next[nums2[v.back()]] = current;
                v.pop_back();
            }
            v.push_back(i);
        }

        for (int i = 0; i < nums1.size(); ++i) {
            if (next.find(nums1[i]) != next.end()) {
                ans.push_back(next[nums1[i]]);
            } else {
                ans.push_back(-1);
            }
        }

        return ans;
    }
};