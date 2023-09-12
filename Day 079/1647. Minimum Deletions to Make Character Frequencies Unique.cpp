class Solution {
public:
    int minDeletions(string s) {
        vector<int> freq(26, 0);
        for (char c : s) {
            freq[c - 97]++;
        }

        vector<int> a;
        for (int f : freq) {
            if (f > 0) {
                a.push_back(f);
            }
        }

        sort(a.begin(), a.end(), greater<int>());
        int ans = 0;
        for (int i = 1; i < a.size(); i++) {
            while (a[i] >= a[i - 1] && a[i] > 0) {
                ans++;
                a[i]--;
            }
        }
        return ans;
    }
};