class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>m;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        int ans=-1;
        for(auto x:m)
        {
            if(x.first==x.second)
            {
                ans=max(ans,x.first);
                
            }
        }
        return ans;
    }
};