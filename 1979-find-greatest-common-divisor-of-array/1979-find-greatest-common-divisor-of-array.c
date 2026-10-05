int findGCD(int* nums, int numsSize) {
    int min = 1000, max = 1;
    int gcd = 1;
    int i;
    for (i = 0; i < numsSize; i++) {
        if (nums[i] < min) {
            min = nums[i];
        }
        if (nums[i] > max) {
            max = nums[i];
        }
    }
    for (i = 1; i <= min; i++) {
        if (min % i == 0 && max % i == 0) {
            gcd = i;
        }
    }
    return gcd;
}