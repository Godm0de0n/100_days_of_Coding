class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0;
        int r = 0;
        int n = nums.size();
        int s = 0;
        int len = n+1;
        while (r < n) {
            s += nums[r++];
            while (s >= target) {
                len =min(len,r-l);
                s-=nums[l++];
            }
        }
        if (len == n+1){
            return 0;
        }
        else {
            return len;
        }
    }
};