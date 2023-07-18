class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int a = 0;
        int c = strs[0].size();
        int r = strs.size();
        for(int i=0; i<c; i++)
        {
            for(int j=0; j<r-1; j++)
            {
                if(strs[j][i] > strs[j+1][i])
                {
                    a++;
                    break;
                }
            }
        }
        return a;
    }
};