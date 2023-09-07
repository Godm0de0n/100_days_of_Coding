class Solution {
    public int minMoves2(int[] nums) {
        int ans =0;
        Arrays.sort(nums);
        int mid = nums.length/2;
        for (int i = 0;i<nums.length;i++){
            if (nums[i]<nums[mid]){
                ans += nums[mid]-nums[i];
            }
            else if (nums[i]>nums[mid]){
                ans += nums[i]-nums[mid];
            }
        }
        return ans;
    }
}