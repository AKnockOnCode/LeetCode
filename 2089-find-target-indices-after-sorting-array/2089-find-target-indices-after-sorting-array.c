/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int compare(const void* a, const void* b) {
    int x = *(const int*)a;
    int y = *(const int*)b;

    return (x > y) - (x < y);
}

int* targetIndices(int* nums, int numsSize, int target, int* returnSize) {
    qsort(nums, numsSize, sizeof(int), compare);

    int* arr = malloc(numsSize * sizeof(int));
    int count = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == target) {
            arr[count++] = i;
        }
    }

    *returnSize = count;
    return arr;
}