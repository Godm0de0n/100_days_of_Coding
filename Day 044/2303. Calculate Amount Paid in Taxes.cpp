class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income) {
        double ans=0;
        for(int i=0; i<brackets.size(); i++)
        {
            int t;
            if(i == 0)
                t = brackets[i][0];
            else
                t = brackets[i][0] - brackets[i-1][0];
            if(t > income)
                t = income;
            ans += t * brackets[i][1]/100.00;
            income -= t;
        }
        return ans;
    }
};