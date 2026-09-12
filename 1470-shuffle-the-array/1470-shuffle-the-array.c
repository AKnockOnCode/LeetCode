

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize) {
    int i;
    int j = 0;
    int* arr = malloc(numsSize * sizeof(int));
    for (i = 0; i < numsSize; i++) {
        arr[j++] = nums[i];
        arr[j++] = nums[i + n];
        if (j == numsSize)
            break;
    }
    *returnSize = numsSize;
    return arr;
}