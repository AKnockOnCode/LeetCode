int maximumCount(int* nums, int numsSize) {
    int pos = 0, neg = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > 0) {
            pos++;
        } else if (nums[i] < 0) {
            neg++;
        }
    }
    int max = pos > neg ? pos : neg;
    return max;
}