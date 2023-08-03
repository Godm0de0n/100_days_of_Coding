class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n-1!=nums[n-1]){
            return false;
        }
        else{
            for (int i =0;i<n-2;i++){
                if (nums[i+1]==nums[i]){
                    return false;
                }
            }
        }
        if (nums[n-1]==nums[n-2]){
            return true;
        }
        return false;
    }
};