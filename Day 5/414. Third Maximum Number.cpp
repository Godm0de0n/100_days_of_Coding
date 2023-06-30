class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end() , greater<int>());
        vector<int> num;
        num.push_back(nums[0]);
        for (int i =1;i<nums.size();i++){
                if (nums[i]!=nums[i-1]){
                    num.push_back(nums[i]);
                }
            }
        if (num.size()==1){
            return num[0];
        }
        else if (num.size()==2){
            return max(num[0],num[1]);
        }
        else{
            return num[2];
        }
    }
};