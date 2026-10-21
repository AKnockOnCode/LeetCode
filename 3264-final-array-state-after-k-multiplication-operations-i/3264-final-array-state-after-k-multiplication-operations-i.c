/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getFinalState(int* nums, int numsSize, int k, int multiplier,
                   int* returnSize) {
    int min, i, index = 0;
    while (k--) {
        min = nums[0];
        index = 0;
        for (i = 0; i < numsSize; i++) {
            if (nums[i] < min) {
                min = nums[i];
                index = i;
            }
        }
        nums[index] *= multiplier;
    }
    *returnSize = numsSize;
    return nums;
}