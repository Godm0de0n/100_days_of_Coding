class Solution {
public:

    int countBits(int n){
        int c =0;
        while(n){
            c += n%2;
            n/=2;
        }
        return c;
    }
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int ans=0;
        for (int i =0;i<nums.size();i++){
            if (countBits(i)== k){
                ans += nums[i];
            }
        }
        return ans;
    }
};