int maxProduct(int* nums, int numsSize) {
    int max = 0;
    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if ((nums[i] - 1) * (nums[j] - 1) > max) {
                max = (nums[i] - 1) * (nums[j] - 1);
            }
        }
    }
    return max;
}