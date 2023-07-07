int findUnsortedSubarray(int* nums, int numsSize){
    int r=0;
    int l=0;
    int mi = INT_MAX;
    int ma = INT_MIN;

    for (int i = 0; i < numsSize; i++) {
        ma = fmax(ma, nums[i]);
        if (ma > nums[i]) {
            r = i;
        }
    }

    for (int i = numsSize - 1; i >= 0; i--) {
        mi = fmin(mi, nums[i]);
        if (mi < nums[i]) {
            l = i;
        }
    }

    if (l == r) {
        return 0;
    } else {
        return r - l + 1;
    }
}