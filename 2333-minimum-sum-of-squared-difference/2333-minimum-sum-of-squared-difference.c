long long minSumSquareDiff(int* nums1, int nums1Size, int* nums2, int nums2Size,
                           int k1, int k2) {
    long long hash[100001] = {0};
    long long sum = 0;
    long long i;
    int max = 0;
    for (i = 0; i < nums1Size; i++) {
        hash[abs(nums1[i] - nums2[i])]++;
        if (abs(nums1[i] - nums2[i]) > max) {
            max = abs(nums1[i] - nums2[i]);
        }
    }
    int k = k1 + k2;
    for (i = max; i > 0; i--) {
        if (k > 0) {
            if (hash[i] >= k) {
                hash[i] -= k;
                hash[i - 1] += k;
                k = 0;
            } else {
                hash[i - 1] += hash[i];
                k -= hash[i];
                hash[i] = 0;
            }
        }
    }
    for (i = 0; i <= max; i++) {
        sum += hash[i] * i * i;
    }
    return sum;
}