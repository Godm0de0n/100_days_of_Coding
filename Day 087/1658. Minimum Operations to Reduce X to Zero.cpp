class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int a=0, b=0, c=0;
        int t = accumulate(nums.begin(),nums.end(),0) - x;
        if (t==0){
            return nums.size();
        }
        for (int i =0;i<nums.size();i++){
            a += nums[i];
            while (b<=i && a>t){
                a -= nums[b];
                b++;
            }
            if (a == t){
                c = max (c,i+1-b);
            }
        }
        if (c == 0){
            return -1;
        }
        else{
            return nums.size()-c;
        }
    }
};