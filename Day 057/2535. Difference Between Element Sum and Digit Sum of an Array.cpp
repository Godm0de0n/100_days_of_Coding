class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum =0;
        for (int i =0;i<nums.size();i++){
            sum+=nums[i];
            int a=nums[i];
            while(a){
                sum-=a%10;
                a/=10;
                }
        }
        return sum;
    }
};