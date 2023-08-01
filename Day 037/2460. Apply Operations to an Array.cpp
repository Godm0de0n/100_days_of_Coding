class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int a=0;
        for(int i=1;i<nums.size();i++){
            if(nums[a]==nums[i]){
                nums[a]*=2;
                nums[i]=0;
            }
            a++;
        }
        int j=0;       
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
        return nums;
    }
};