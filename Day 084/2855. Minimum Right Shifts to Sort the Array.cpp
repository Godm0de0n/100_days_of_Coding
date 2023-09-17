class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        int a = -1;
        int b = 0;
        int n = nums.size();
        for(int i = 1; i< n ; i++){
            if(nums[i-1] > nums[i]){
                a = i;
                b++;
            }
        }
        if(a == -1) {
            return 0;
        }
        if(b > 1 || nums[0] < nums[n-1]) {
            return -1;
        }
        return n-a;
    }
};