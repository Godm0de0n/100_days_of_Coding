/**
 * @param {number[]} nums
 * @return {number}
 */
var findUnsortedSubarray = function(nums) {
    var n = nums.length;
    var r = 0;
    var l = 0;
    var min = nums[n-1];
    var max = nums[0];

    for (var i = 0; i < n; i++) {
        max = Math.max(max, nums[i]);
        if (max > nums[i]) {
            r = i;
        }
    }

    for (var i = n - 1; i >= 0; i--) {
        min = Math.min(min, nums[i]);
        if (min < nums[i]) {
            l = i;
        }
    }

    if (l == r) {
        return 0;
    } else {
        return r - l + 1;
    }
};