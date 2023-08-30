class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> p1;
        vector<int> p2;
        int c=0;

        for (int i = 0; i <nums.size();i++){
            if (nums[i]<pivot){
                p1.push_back(nums[i]);
            }
            else if (nums[i]>pivot){
                p2.push_back(nums[i]);
            }
            else{
                c++;
            }
        }
        for (int i =0;i<c;i++){
            p1.push_back(pivot);
        }
        for (int i =0;i<p2.size();i++){
            p1.push_back(p2[i]);
        }
        return p1;
    }
};