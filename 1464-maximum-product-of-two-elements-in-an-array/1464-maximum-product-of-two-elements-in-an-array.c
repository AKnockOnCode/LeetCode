int maxProduct(int* nums, int numsSize) {
    int hash[1001] = {0}, min = 1000, max = 0;
    for (int i = 0; i < numsSize; i++) {
        hash[nums[i]]++;
        if (nums[i] < min) {
            min = nums[i];
        }
        if (nums[i] > max) {
            max = nums[i];
        }
    }
    int prod = max-1;
    hash[max]--;
    for (int i = max; i >= min; i--) {
        if (hash[i]) {
            prod *= i-1;
            break;
        }
    }
    return prod;
}