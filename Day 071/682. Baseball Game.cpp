class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a;

        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "+") {
                int n = a.size();
                int score = (n >= 2) ? (a[n - 1] + a[n - 2]) : 0;
                a.push_back(score);
            } else if (operations[i] == "D") {
                int score = (a.size() > 0) ? (2 * a.back()) : 0;
                a.push_back(score);
            } else if (operations[i] == "C") {
                if (!a.empty()) {
                    a.pop_back();
                }
            } else {
                int score = stoi(operations[i]);
                a.push_back(score);
            }
        }

        int ans = 0;

        for (int i = 0; i < a.size(); i++) {
            ans += a[i];
        }
        return ans;
    }
};