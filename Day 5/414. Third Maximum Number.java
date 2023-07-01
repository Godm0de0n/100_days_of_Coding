import java.util.Arrays;
import java.util.ArrayList;
import java.util.List;
import java.util.Collections;

class Solution {
    public int thirdMax(int[] nums) {
        Arrays.sort(nums);
        List<Integer> num = new ArrayList<>();
        num.add(nums[nums.length - 1]);
        for (int i = nums.length - 2; i >= 0; i--) {
            if (nums[i] != nums[i + 1]) {
                num.add(nums[i]);
            }
        }
        if (num.size() == 1) {
            return num.get(0);
        } else if (num.size() == 2) {
            return Math.max(num.get(0), num.get(1));
        } else {
            return num.get(2);
        }
    }
}
