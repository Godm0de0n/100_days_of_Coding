class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, candidate = -1;
	    for (int i = 0; i < nums.size(); i++) {
            if (count == 0) {
                candidate = nums[i];
                count = 1;
            }
            else {
                if (nums[i] == candidate)
                count++;
                else
                count--;
        }
	}

	count = 0;
	for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == candidate)
            count++;
        }
	if (count > (nums.size() / 2))
	return candidate;
	return -1;
    }
};