int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int i, count = 0, max = 0;
    for (i = 0; i < numsSize; i++) {
        if (nums[i] == 1) {
            count++;
        }
        if (count > max) {
            max = count;
        }
        if (nums[i] == 0) {
            count = 0;
        }
    }
    return max;
}