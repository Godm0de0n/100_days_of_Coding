class Solution {
    public int differenceOfSum(int[] nums) {
        int sum =0;
        for (int i =0;i<nums.length;i++){
            sum+=nums[i];
            int a=nums[i];
            while(a!=0){
                sum-=a%10;
                a/=10;
                }
        }
        return sum;
    }
}