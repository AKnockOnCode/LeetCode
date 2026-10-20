/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findMissingElements(int* nums, int numsSize, int* returnSize) {
    int min = 100, max = 1;
    int i;
    for (i = 0; i < numsSize; i++) {
        if (nums[i] < min) {
            min = nums[i];
        }
        if (nums[i] > max) {
            max = nums[i];
        }
    }
    int hash[101] = {0};
    for (i = 0; i < numsSize; i++) {
        hash[nums[i]]++;
    }
    int* arr = malloc((max - min + 1) * sizeof(int));
    int j = 0;
    for (i = min; i <= max; i++) {
        if (!hash[i]) {
            arr[j++] = i;
        }
    }
    *returnSize = j;
    return arr;
}