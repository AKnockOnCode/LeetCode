int findFinalValue(int* nums, int numsSize, int original) {
    int found = 1, change;
    while (found) {
        change = original;
        for (int i = 0; i < numsSize; i++) {
            if (nums[i] == original) {
                original *= 2;
            }
            if (i == numsSize - 1 && change == original) {
                found = 0;
            }
        }
    }
    return original;
}